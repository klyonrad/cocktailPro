//@(#) RezepturProzessor.h

#ifndef REZEPTURPROZESSOR_H_H
#define REZEPTURPROZESSOR_H_H

// #include "Rezept.h"
#include <string>
#include <list>
#include "Dosierer.h"
#include "Entleerer.h"
#include "Mischbehaelter.h"
#include "Waage.h"
#include "Rezeptbuch.h"
//
class RezepturProzessor
{

public:
	RezepturProzessor(void);
	//
	void cocktailMischen(Rezept* rezept);
	//
	RezepturProzessor(std::list<std::string> dosiererZutaten);
	void setDosiererZutaten(std::list<std::string> dosiererZutaten);

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

public:

};

#endif
