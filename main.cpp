#include <iostream>
#include "Countable.h"
using namespace std;

int main() {
	Countable a;
	Countable b;
	Countable c;
	
	std::cout<<"counter: "<<Countable::counter<<std::endl;
	
	return 0;
}

