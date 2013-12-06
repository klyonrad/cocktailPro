//@(#) CocktailPro.h

#ifndef COCKTAILPRO_H_H
#define COCKTAILPRO_H_H

#include "RezepturProzessor.h"
#include "CocktailPossibilities.h"
#include <string>
//
class CocktailPro
{
	
public:
	//
	void main();
	//
	void printKonfig();
	//
	void printMenu();
	//
	void printMischbareRezepte();
	//
	void rezeptAusfuehren();
	//
	void zutatenEinlesen();
	
private:
	//
    std::string dosiererZutaten;
	
	//
	CocktailPossibilities * myCocktailPossibilities;
	
	//
    // RezepturProzessor myRezepturProzessor;
	
	//
	string rezeptNames;
	
	
};

#endif
