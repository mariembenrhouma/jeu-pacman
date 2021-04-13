#include "constantes.h"
#include "character.h"
#include "pacman.h"
#include"ghost.h"
#include<iostream>
using namespace std;

ghost::ghost(string a,string b ,int c, int d, pacman pac): character(a,b)
{
    X=c;
    Y=d;
    Xold=X;
    Yold=Y;
    p=pac;

}
ghost::~ghost()
{

}

bool ghost::BougerCommun(int Random, bool Bouger)
{
	//Passer par les tunnels pour warper l'autre bord
	if (X == 9 && Y == 0)
	{
		Y = 17;
		Bouger = true;
	}
	else if (X == 9 && Y == 18)
	{
		Y = 1;
		Bouger = true;
	}

	//Code du cul de sac droit
	if (Tableau[X][Y+1] == M && Tableau[X-1][Y] == M &&
		Tableau[X][Y-1] == M && Bouger)
	{
		X -= 1;
		Bouger = true;
	}
	//Code du cul de sac gauche
	else if (Tableau[X][Y-1] == M && Tableau[X+1][Y] == M &&
		Tableau[X][Y+1] == M && Bouger)
	{
		X += 1;
		Bouger = true;
	}

	return Bouger;
}
bool ghost::BougerRandom(int random)
{
	Bouger = false;

	//Pour le bas de la cage fermé - Ne pas aller se promener dedans
	if (Y== 9 && X == 9 && !Bouger)
	{
		Y-= 1;
		Bouger = true;
	}

	if (Tableau[X][Y-1] != M && random == 0 && Bouger)
	{
		Bouger = BougerHaut();
	}
	else if (Tableau[X][Y+1] != M && random == 1 && Bouger)
	{
		Bouger = BougerBas();
	}
	else if (Tableau[X-1][Y]!= M && random == 2 && Bouger)
	{
		Bouger = BougerGauche();
	}
	else if (Tableau[X+1][Y] != M && random == 3 && Bouger)
	{
		Bouger = BougerDroite();
	}
    Bouger = BougerCommun(random, Bouger);
	return Bouger;
}

bool ghost::BougerSuivre(int random)
{
	Bouger = false;
    if (Y == 9 && X == 9 && Bouger == 0)
	{
		Y -= 1;
		Bouger = true;
	}

	if (Tableau[X][Y-1] != M && Y > p.GetY() && Bouger)
	{
		Bouger = BougerHaut();
	}
	else if (Tableau[X][Y+1] != M && Y < p.GetY() && Bouger)
	{
		if(X > p.GetX())
		{
			Bouger = BougerGauche();
		}
		else
		{
			Bouger = BougerDroite();
		}
	}
	else if (Tableau[X-1][Y] != M && X > p.GetX() && Bouger)
	{
		Bouger = BougerGauche();
	}
	else if (Tableau[Y][X+1] != M && X < p.GetX() && Bouger)
	{
		Bouger = BougerDroite();
	}
	else
	{
		Bouger = BougerBas();
        Bouger = BougerCommun(random, Bouger);
	}

       return Bouger;
}


bool ghost::BougerFuite(int random)
{
	Bouger = false;

	//Pour le bas de la cage fermé - Ne pas aller se promener dedans
	if (Y == 9 && X == 9 && Bouger)
	{
		Y -= 1;
		Bouger = true;
	}

	if (Tableau[X][Y-1] != M && Y < p.GetY() && Bouger)
	{
		Bouger = BougerHaut();
	}
	else if (Tableau[X][Y+1] != M && Y > p.GetY() && Bouger)
	{
        Bouger = BougerRandom(random);
		Bouger = BougerCommun(random, Bouger);
	}
	else if (Tableau[X-1][Y] != M && X < p.GetX() && Bouger)
	{
		Bouger = BougerGauche();
	}
	else if (Tableau[X+1][Y] != M && X > p.GetX() && Bouger)
	{
		Bouger = BougerDroite();
	}
	//Ça pass encore marché, alors en s'en remet au random
	else if (Tableau[X][Y-1] != M && random == 0 && Bouger)
	{
		Bouger = BougerHaut();
	}
	else if (Tableau[X][Y] != M && random == 1 && Bouger)
	{
		Bouger = BougerBas();
	}
	else if (Tableau[X-1][Y] != M && random == 2 && Bouger)
	{
		Bouger = BougerGauche();
	}
	else if (Tableau[X+1][Y] != M && random == 3 && Bouger)
	{
		Bouger = BougerDroite();
	}

	Bouger = BougerCommun(random, Bouger);

	return Bouger;
}
