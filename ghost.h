#ifndef GHOST_H_INCLUDED
#define GHOST_H_INCLUDED

#include "character.h"

class pacman;
class ghost : public character
{
private:
	bool Bouger;
	pacman* p;
public:
	ghost(string ,string ,int , int , pacman );
	~ghost();
    bool BougerCommun(int Random, bool Bouge);
	bool BougerRandom(int Random);
	bool BougerSuivre(int Random);
	bool BougerFuite(int Random);
};

#endif // GHOST_H_INCLUDED
