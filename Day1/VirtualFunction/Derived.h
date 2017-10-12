#include <iostream>
#include "Base.h"
using namespace std;

class Derived : public Base {
	int *z;
public:
	Derived();
	~Derived();
	void F1();
	void F3();
};
