//@(#) RezepturProzessor.h

#ifndef REZEPTURPROZESSOR_H_H
#define REZEPTURPROZESSOR_H_H

// #include "Rezept.h"
#include <string>
#include "Dosierer.h"
#include "Entleerer.h"
#include "Mischbehaelter.h"
#include "Waage.h"
#include "Rezeptbuch.h"
//
class RezepturProzessor
{
	
public:
	//
    void cocktailMischen(Rezept* rezept);
	//
	RezepturProzessor(std::string dosiererZutaten);
	
private:
	//
	int aktuelleZutatID;
	
	//
	Dosierer * myDosierer;
	
	//
	Entleerer * myEntleerer;
	
	//
	Mischbehaelter * myMischbehaelter;
	
	//
	Waage * myWaage;
	
	//
	std::string ZutatenName;
	
	//
	void searchZutatID();
	
};

#endif
