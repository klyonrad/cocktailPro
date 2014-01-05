#ifndef REZEPTURPROZESSOR_H_H
#define REZEPTURPROZESSOR_H_H

// #include "Rezept.h"
#include <string>
#include "Dosierer.h"
#include "Entleerer.h"
#include "Mischbehaelter.h"
#include "Waage.h"
#include "Rezeptbuch.h"
#include "CockProGUI.h"

using namespace std;

class RezepturProzessor
{
private:

	int aktuelleZutatID;
	string ZutatenName[10];

	Entleerer * myEntleerer;
	Mischbehaelter * myMischbehaelter;
	Waage * myWaage;
	Dosierer* myDosierer[10];
	cockProGUI* mycockProGUI;

	void searchZutatID();

public:
    void cocktailMischen(Rezept* rezept);
	RezepturProzessor(string* dosiererZutaten);	
	RezepturProzessor(void);
	void setDosiererZutaten(std::string* dosiererZutaten);
};

#endif
