#ifndef COCKTAILPRO_H_H
#define COCKTAILPRO_H_H

#include "RezepturProzessor.h"
#include "CocktailPossibilities.h"
#include <string>
#include <vector>

using namespace std;

class CocktailPro
{
private:
    string dosiererZutaten[10];
	std::vector<std::string> rezeptNames;
	CocktailPossibilities* myCocktailPossibilities;
    RezepturProzessor myRezepturProzessor;
	Rezeptbuch* MyRezeptbuch;
	
public:
	CocktailPro();
	void main();
	void printKonfig();
	void printMenu();
	void printMischbareRezepte();
	bool rezeptAusfuehren();
	void zutatenEinlesen();

};

#endif



