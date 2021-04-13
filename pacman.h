#ifndef PACMAN_H_INCLUDED
#define PACMAN_H_INCLUDED

#include "character.h"

class ghost;
class pacman : public character
{
private:
    int score,soul;
public:
	pacman(string,string,int,int);
	void Bouger(Evenement);
	void gift();
    void addScore();
    void teleport(ghost g);
};


#endif // PACMAN_H_INCLUDED
