#include "constantes.h"
#include "character.h"
#include "pacman.h"
#include"ghost.h"

pacman::pacman(string a,string b,int c,int d):character(a,b)
{
    X=c;
    Y=d;
    Xold=X;
    Yold=Y;
    score=0;
    soul=4;
}
void pacman::gift()
{
    if (score%10000==0)
        soul+=1;
}
void pacman::addScore()
{
    if ( Tableau[Y][X] == P )
    {score+=P;}
    else if ( Tableau[Y][X] == SP )
    {score+=SP;}
}
void pacman::Bouger(Evenement Evenement)
{
	if (Evenement == EVHaut && Y > 0 && Tableau[(Y-1)][X] != M)
	{
		Y-= 1;
	}
	else if (Evenement == EVBas && Y < (Hauteur-1) && Tableau[(Y+1)][X] != M)
	{
	    Y += 1;
    }
	else if (Evenement == EVGauche && X > 0 && Tableau[Y][(X-1)] != M)
	{
	    X -= 1;
    }
	else if (Evenement == EVDroite && X < Largeur-1 && Tableau[Y][X+1] != M)
	{
        X += 1;
    }

	//Teleporteur
	else if (Evenement == EVGauche && Y == 0 && X == 9)
	{
		Y = 18;
	}
	else if (Evenement == EVDroite &&Y == 0 && X == 18)
	{
		Y = 0;
    }
}
void pacman::teleport(ghost g)
{
    if (X==g.GetX() && Y==g.GetY())
    {
        X=Xold;
        Y=Yold;
    }
    soul--;
}
