#include "CocktailPro.h"
#include "Rezeptbuch.h"
#include <string>
#include <iostream>
#include <iomanip>

//copied from example:
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
// end of example copy

using namespace std; 

void testmain();
void hauptmain();
int main()
{
	hauptmain();
	//testmain();
	//cppUnitTestmain();
	return 0;
}

void testmain()
{

	int i=0;

	// das Rezeptbuch anlegen
	Rezeptbuch* MyRezeptbuch = new Rezeptbuch;


	// Rezeptliste ausgeben
	cout << "*********************************************" << endl;
	cout << "Es gibt " << MyRezeptbuch->getAnzahlRezepte() << " Cocktails" << endl;

	for (i=0; i<MyRezeptbuch->getAnzahlRezepte(); i++)
	{
		Rezept* r = MyRezeptbuch->getRezept(i);
		cout << i << ". " << r->getName() << endl;
	}
	cout << "*********************************************" << endl;

	// Rezeptschritte abfragen

	for (i=0; i<MyRezeptbuch->getAnzahlRezepte(); i++) // f�r jedes Rezept...
	{
		cout << endl << endl;
		// Cocktailname als �berschrift
		Rezept* r = MyRezeptbuch->getRezept(i);
		cout << "**** " << r->getName() << " ****" << endl;

		for (int j=0; j<r->getAnzahlRezeptschritte(); j++) // f�r jeden Rezeptschritt...
		{
			Rezeptschritt* rs = r->getRezeptSchritt(j);
			float Menge = rs->getMenge();
			string Zutat = rs->getZutat();

			cout << j << ". " << ": " << setw(15) << Zutat << "\t" << Menge << endl;
		}
	}



	// Rezept loeschen
	Rezept* memoryleak = MyRezeptbuch->getRezept(2);// von uns, memory leak

	cout << "*********************************************" << endl;
	cout << "Teste das Loeschen von Rezepten!" << endl;
	cout << "Es gibt " << MyRezeptbuch->getAnzahlRezepte() << " Cocktails" << endl;
	MyRezeptbuch->deleteRezept(2);
	cout << "Jetzt gibt es ein Rezept weniger, naemlich: " << 
		MyRezeptbuch->getAnzahlRezepte() << " Cocktails" << endl;    

	cout << memoryleak->getName() << endl;

	cout << MyRezeptbuch->getRezept(100) << endl; // out of range test

	cout << MyRezeptbuch->getRezept(3)->getRezeptSchritt(20) << endl; // out of range test


	int maxrezeptschritte = MyRezeptbuch->getRezept(1)->getAnzahlRezeptschritte();
	cout << MyRezeptbuch->getRezept(1)->getRezeptSchritt(maxrezeptschritte-1)->getZutat() << endl;


	for (int i = 0; i < 6; i++) {
		MyRezeptbuch->deleteRezept(0);
		cout << "Rezept " << i << " geloescht" << endl;
	}
	cout << "Rezeptbuch sollte jetzt leer sein. " << endl;
	cout << MyRezeptbuch->getRezept(2) << endl;
	if (MyRezeptbuch->deleteRezept(2) )
		cout << "deleteRezept hat True geliefert. FEHLER" << endl;
	else
		cout << "deleteRezept hat false geliefert. So soll es sein." << endl;
	cout << MyRezeptbuch->getAnzahlRezepte() << endl;

	//char c;
	//cin >> c;

	delete MyRezeptbuch; 

}
void hauptmain()
{
	cout << "----------------CocktailPro-----------------"<< endl;
	cout << "\n----Starte Konfiguration vom CocktailPro----\n\n"<< endl;
	CocktailPro myCockPro;
	cout << "\n\n-------------CocktailPro wurde--------------\n----------erfolgreich Konfiguriert----------\n"<<endl;
	myCockPro.main();
	cout << "\n\n---------CocktailPro wurde Beendet----------\n";
}

void cppUnitTestmain ()
{
	// Create the event manager and test controller
	CPPUNIT_NS::TestResult controller;

	// Add a listener that colllects test result
	CPPUNIT_NS::TestResultCollector result;
	controller.addListener( &result );        

	// Add a listener that print dots as test run.
	CPPUNIT_NS::BriefTestProgressListener progress;
	controller.addListener( &progress );      

	// Add the top suite to the test runner
	CPPUNIT_NS::TestRunner runner;
	runner.addTest( CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest() );
	runner.run( controller );

	// Print test in a compiler compatible format.
	CPPUNIT_NS::CompilerOutputter outputter( &result, CPPUNIT_NS::stdCOut() );
	outputter.write(); 
}