#ifndef COCKTAILPRO_H_H
#define COCKTAILPRO_H_H

#include "RezepturProzessor.h"
#include "CocktailPossibilities.h"
#include <string>

using namespace std;

class CocktailPro
{
private:
	int anzahlRezepte; // Luka: ????????
    string dosiererZutaten[10];
	string rezeptNames[20];			//maximal 20 rezepte möglich... //TODO: rewrite with vector<> or list<>
	CocktailPossibilities* myCocktailPossibilities;
    RezepturProzessor myRezepturProzessor;
	Rezeptbuch* MyRezeptbuch;
	
public:
	CocktailPro();
	void main();
	void printKonfig();
	void printMenu();
	void printMischbareRezepte();
	void rezeptAusfuehren();
	void zutatenEinlesen();

};

#endif



