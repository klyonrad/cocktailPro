#pragma once
#include <cppunit\TestFixture.h>
#include <cppunit\TestCase.h>
#include <cppunit\TestSuite.h>
#include <cppunit\TestCaller.h>
#include <cppunit\extensions\HelperMacros.h>
#include "Dosierer.h"
#include "Waage.h"
#include <vector>

using std::vector;
using std::cout;
using std::endl;

class DosiererTest :
	public CppUnit::TestFixture
{
	CPPUNIT_TEST_SUITE( DosiererTest );
	CPPUNIT_TEST( testGetZutat );
	CPPUNIT_TEST( testAktualisiere1 );
	CPPUNIT_TEST( testAktualisiere2 );
	CPPUNIT_TEST_SUITE_END();
private:
	vector<Dosierer> testDosierer;
	Waage myWaage;

public:
	DosiererTest(void);
	~DosiererTest(void);
	void setUp(void);
	void tearDown(void);
	void testGetZutat(void);
	void testAktualisiere1(void);
	void testAktualisiere2(void);
};
