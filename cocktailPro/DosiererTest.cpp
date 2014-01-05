#include "DosiererTest.h"


DosiererTest::DosiererTest(void)
{
}


DosiererTest::~DosiererTest(void)
{
}


void DosiererTest::setUp(void)
{
	Waage myWaage;
	for (int i = 0; i < 10; i++)
	{
		testDosierer.emplace_back(Dosierer("ohneZutat", &myWaage));
	}
}

void DosiererTest::testGetZutat(void)
{
	CPPUNIT_ASSERT (testDosierer[0].getZutat() == "ohneZutat");
	CPPUNIT_ASSERT (testDosierer[0].getZutat() == testDosierer[1].getZutat() );
	CPPUNIT_ASSERT ( ! (testDosierer[0].getZutat() == "blahblah") );
}