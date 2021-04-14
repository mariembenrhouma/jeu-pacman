#ifndef CHARACTER_H_INCLUDED
#define CHARACTER_H_INCLUDED

#include<string>
using namespace std;
class character
{
protected:
    string color,name;
	int X;
	int Y;
	int Xold;	//Ancien X
	int Yold;	//Ancien Y

public:
	character(string  ,string  );
	~character();

	bool BougerHaut();
	bool BougerBas();
	bool BougerDroite();
	bool BougerGauche();

	int GetX();
	int GetY();
	int GetOldX();
	int GetOldY();

	void SetX(int);
	void SetY(int);
};

#endif // CHARACTER_H_INCLUDED
