#ifndef CONSTANTES_H_INCLUDED
#define CONSTANTES_H_INCLUDED

//Déclarations de constantes requises pour le jeu
const int Largeur = 19;
const int Hauteur = 21;
const int NbPixelsParCase = 16;
//nos propres constantes
const int VitesseFantome = 10;
const int MurMince = 4;

const int TEMPS_FUITE = 150;

//Énumération pour représenter une case du labyrinthe
//V=Vide, M=Mur, P=Pastille ,SP=Super Pastille
enum Objet {V, M, P=100 ,SP=200};

//mouvements possibles
enum Evenement {EVBas,EVHaut,EVDroite,EVGauche};


//Tableau de la carte
static Objet Tableau[Hauteur][Largeur] =
{
	{ M, M, M, M, M, M, M, M, M, M, M, M, M, M, M, M, M, M, M},
	{ M, SP, P, P, P, P, P, P, P, M, P, P, P, P, P, P, P, SP, M},
	{ M, P, M, M, P, M, M, M, P, M, P, M, M, M, P, M, M, P, M},
	{ M, P, P, P, P, P, P, P, P, P, P, P, P, P, P, P, P, P, M},
	{ M, P, M, M, P, M, P, M, M, M, M, M, P, M, P, M, M, P, M},
	{ M, P, P, P, P, M, P, P, P, M, P, P, P, M, P, P, P, P, M},
	{ M, M, M, M, P, M, M, M, V, M, V, M, M, M, P, M, M, M, M},
	{ V, V, V, M, P, M, V, V, V, V, V, V, V, M, P, M, V, V, V},
	{ M, M, M, M, P, M, V, M, M, V, M, M, V, M, P, M, M, M, M},
	{ V, V, V, V, P, V, V, M, V, V, V, M, V, V, P, V, V, V, V},
	{ M, M, M, M, P, M, V, M, M, M, M, M, V, M, P, M, M, M, M},
	{ V, V, V, M, P, M, V, V, V, V, V, V, V, M, P, M, V, V, V},
	{ M, M, M, M, P, M, V, M, M, M, M, M, V, M, P, M, M, M, M},
	{ M, P, P, P, P, P, P, P, P, M, P, P, P, P, P, P, P, P, M},
	{ M, P, M, M, P, M, M, M, P, M, P, M, M, M, P, M, M, P, M},
	{ M, P, P, M, P, P, P, P, P, P, P, P, P, P, P, M, P, P, M},
	{ M, M, P, M, P, M, P, M, M, M, M, M, P, M, P, M, P, M, M},
	{ M, P, P, P, P, M, P, P, P, M, P, P, P, M, P, P, P, P, M},
	{ M, P, M, M, M, M, M, M, P, M, P, M, M, M, M, M, M, P, M},
	{ M, SP, P, P, P, P, P, P, P, P, P, P, P, P, P, P, P, SP, M},
	{ M, M, M, M, M, M, M, M, M, M, M, M, M, M, M, M, M, M, M},
};



#endif // CONSTANTES_H_INCLUDED
