#include "DosiererTest.h"

CPPUNIT_TEST_SUITE_REGISTRATION(DosiererTest);

DosiererTest::DosiererTest(void)
{
}


DosiererTest::~DosiererTest(void)
{
}


void DosiererTest::setUp(void)
{
	cout << __FUNCTION__  << " called"<< endl;
	for (int i = 0; i < 10; i++)
	{
		testDosierer.emplace_back(Dosierer("ohneZutat", &myWaage));
	}
}

void DosiererTest::tearDown(void)
{
	cout << __FUNCTION__  << " called"<< endl;
	cout << "nothing to do. " << endl;
}

void DosiererTest::testGetZutat(void)
{
	cout << __FUNCTION__  << " called"<< endl;
	CPPUNIT_ASSERT (testDosierer[0].getZutat() == "ohneZutat");
	CPPUNIT_ASSERT (testDosierer[0].getZutat() == testDosierer[1].getZutat() );
	CPPUNIT_ASSERT ( ! (testDosierer[0].getZutat() == "blahblah") );
}

void DosiererTest::testAktualisiere1(void)
{
	cout << __FUNCTION__  << " called"<< endl;
	int testgewicht = 60;
	testDosierer[0].abfuellen(testgewicht);
	CPPUNIT_ASSERT (myWaage.getDifferenzgewicht() == testgewicht);
}

void DosiererTest::testAktualisiere2(void)
{
	cout << __FUNCTION__  << " called"<< endl;
	int testgewicht = 200;
	testDosierer[0].abfuellen(testgewicht);
	CPPUNIT_ASSERT (myWaage.getDifferenzgewicht() == testgewicht);
}