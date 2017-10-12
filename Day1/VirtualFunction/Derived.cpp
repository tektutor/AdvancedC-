#include "Derived.h"

Derived::Derived() {
	z = new int();
	cout << "Derived constructor " << endl;
}

Derived::~Derived() {
	cout << "Derived destructor " << endl;
	delete z;
}

void Derived::F3() {
	cout << "Derived F3 method " << endl;
}

void Derived::F1() {
	cout << "Derived F1 method " << endl;
}
