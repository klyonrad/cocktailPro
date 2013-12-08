#include "CocktailPossibilities.h"
#include <iostream>
#include <iomanip>

using namespace std;

CocktailPossibilities::CocktailPossibilities()
{
	MyRezeptbuch=new Rezeptbuch;
}
Rezeptbuch* CocktailPossibilities::mischbareRezepteBerechnen(string* zutatenListe)
{ 
	for (int i=0; i < MyRezeptbuch->getAnzahlRezepte(); i++) // für jedes Rezept...
	{
		bool mischbar=true;
		Rezept* r = MyRezeptbuch->getRezept(i);
		for (int j=0; j < r->getAnzahlRezeptschritte(); j++) // für jeden Rezeptschritt...
		{
			bool zutatVorhanden=false;
			Rezeptschritt* rs = r->getRezeptSchritt(j);
			for (int k=0;k<10;k++)
			{
				if(zutatenListe[k]==rs->getZutat()  || "Stampfen"==rs->getZutat()  ||  "Mischen"==rs->getZutat())
				{
					zutatVorhanden=true;
				}
			}
			if(zutatVorhanden==false)
			{
				mischbar=false;
			}  
		}
		if(mischbar)
		{
			//cout<<r->getName()<<" \t\tmischbar"<<endl;
		}
		else
		{
			//cout<<r->getName()<<" \t\tnicht mischbar"<<endl;
			MyRezeptbuch->deleteRezept(i);
			i--; // because the for loop does i++ but we still wanna access the next recipe
		}
	}
	return MyRezeptbuch;
}

