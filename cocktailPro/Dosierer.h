//@(#) Dosierer.h

#ifndef DOSIERER_H_H
#define DOSIERER_H_H

#include "Beobachter.h"
#include "string.h"
#include "Waage.h"
#include <string>
//
class Dosierer: Beobachter
{
	
public:
	//
	void abfuellen(int zutatmenge);
	//
	void aktualisiere();
	//
	Dosierer(std::string zutat, const Waage& myWaage);
	//
	std::string getZutat();
	//
	void setZutat(std::string zutat);
	
private:
	//
	int abgefuelltesGewicht;
	
	//
	Waage * myWaage;
	
	//
	bool stueckDosierer;
	
	//
	bool ventilOffen;
	
	//
	std::string zutat;
	
	//
	void ventilOeffnen();
	//
	void ventilSchliessen();
	
};

#endif
