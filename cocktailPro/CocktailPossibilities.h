//@(#) CocktailPossibilities.h

#ifndef COCKTAILPOSSIBILITIES_H_H
#define COCKTAILPOSSIBILITIES_H_H

#include "Rezeptbuch.h"
#include <string>
// #include "Rezept.h"
//
class CocktailPossibilities: Rezeptbuch
{
	
public:
	//
	void mischbareRezepteBerechnen(std::string zutatenListe);
	
private:
	//
	Rezept m_Rezepte_mischbar;
	
	//
	void addRezept(const Rezept& rezeptToAdd);
	
};

#endif
