#ifndef ENTLEERER_H_H
#define ENTLEERER_H_H

#include "Beobachter.h"
#include "Waage.h"

using namespace std;

class Entleerer: Beobachter
{
private:
	Waage * myWaage;
	int restmenge;
	bool ventilOffen;
	void reinigen();
	void ventilOeffnen();
    void ventilSchliessen();
	
public:
	void aktualisiere();
	void entleeren();
	Entleerer(Waage* myWaage);
};

#endif
