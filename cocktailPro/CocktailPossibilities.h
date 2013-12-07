#ifndef COCKTAILPOSSIBILITIES_H_H
#define COCKTAILPOSSIBILITIES_H_H

#include "Rezeptbuch.h"
#include <string>
// #include "Rezept.h"

using namespace std;

class CocktailPossibilities: Rezeptbuch
{
private://public, bzw friend ?
	Rezeptbuch* MyRezeptbuch;
public:
	CocktailPossibilities();
	Rezeptbuch* mischbareRezepteBerechnen(string* zutatenListe);

	friend class CocktailPro;
};

#endif
