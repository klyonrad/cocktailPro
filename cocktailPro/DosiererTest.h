#pragma once
#include <cppunit\TestFixture.h>
#include <cppunit\TestCase.h>
#include "Dosierer.h"
#include "Waage.h"
#include <vector>

using std::vector;

class DosiererTest :
	public CppUnit::TestFixture
{
private:
	vector<Dosierer> testDosierer;

public:
	DosiererTest(void);
	~DosiererTest(void);
	void setUp(void);
	void testGetZutat(void);
	void testAktualisiere1(void);
	void testAktualisere2(void);
};

