#ifndef ENTLEERER_H_H
#define ENTLEERER_H_H

#include "Beobachter.h"
#include "Waage.h"

using namespace std;

class Entleerer: Beobachter
{
	
public:
	//
	void aktualisiere();
	//
	void entleeren();
	//
	Entleerer(Waage* myWaage);
	
private:
	//
	Waage * myWaage;
	
	//
	int restmenge;
	
	//
	bool ventilOffen;
	
	//
	void reinigen();
	//
	void ventilOeffnen();
	//
    void ventilSchliessen();
	
};

#endif
