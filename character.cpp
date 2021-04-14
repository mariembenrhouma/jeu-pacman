#include "character.h"

character::character(string a, string b)
{
	name = a;
	color = b;
}

bool character::BougerHaut()
{
	Y -= 1;
	return true;
}

bool character::BougerBas()
{
	Y += 1;
	return true;
}

bool character::BougerDroite()
{
	X += 1;
	return true;
}

bool character::BougerGauche()
{
	X-= 1;
	return true;
}

int character::GetX()
{
	return X;
}

int character::GetY()
{
	return Y;
}

int character::GetOldX()
{
	return Xold;
}

int character::GetOldY()
{
	return Yold;
}

void character::SetX(int x)
{
    X = x;
}

void character::SetY(int y)
{
    Y = y;
}
