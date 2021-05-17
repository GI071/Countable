#include <iostream>
#include "Countable.h"
using namespace std;


int counter;
	
Countable::Countable() {counter += 1;}
Countable::~Countable(){};

int Countable::counter = 0;
