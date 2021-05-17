#ifndef COUNTABLE_H
#define COUNTABLE_H

#include <iostream>
using namespace std;

class Countable {
	public:
		static int counter;
		Countable();
		~ Countable();
};

#endif

