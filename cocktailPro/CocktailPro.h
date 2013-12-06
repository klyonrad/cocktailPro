//@(#) CocktailPro.h

#ifndef COCKTAILPRO_H_H
#define COCKTAILPRO_H_H

#include "RezepturProzessor.h"
#include "CocktailPossibilities.h"
#include <string>
#include <list>
//
class CocktailPro
{
	
public:
	CocktailPro(void);
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
    std::list<std::string> dosiererZutaten;
	
	//
	CocktailPossibilities * myCocktailPossibilities;
	
	RezepturProzessor myRezepturProzessor;
	
	//
	std::string rezeptNames;
	
	
};

#endif
