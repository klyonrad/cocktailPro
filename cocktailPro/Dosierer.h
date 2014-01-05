#ifndef DOSIERER_H_H
#define DOSIERER_H_H

#include "Beobachter.h"
#include "Waage.h"
#include <string>

using namespace std;

class Dosierer: Beobachter
{
	
public:
	void abfuellen(int zutatmenge);
	void aktualisiere();
	Dosierer(string zutat, Waage* myWaage);

	string getZutat();
	void setZutat(string zutat);
	
private:
	int abgefuelltesGewicht;
	int currentRezeptSchrittMenge; // damit aktualisiere() darauf zugriff hat
	Waage * myWaage;
	bool stueckDosierer;
	bool ventilOffen;
	string zutat;
	void ventilOeffnen();
	void ventilSchliessen();
};

#endif
