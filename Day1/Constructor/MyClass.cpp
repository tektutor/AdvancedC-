#include "MyClass.h"

MyClass::~MyClass() {
	cout << "Destructor ..." << endl;
}

MyClass::MyClass() {
	cout << "Default constructor ..." << endl;
	x = y = 0;
}

MyClass::MyClass(int x, int y) {
	this->x = x;
	this->y = y;
	cout << "1 - overloaded constructor ..." << endl;
}

MyClass::MyClass(int a) {
	this->x = a;
	this->y = a;
	cout << "2 - overloaded constructor ..." << endl;
}

void MyClass::print() {
	cout << "Value of X is " << x << endl;
	cout << "Value of Y is " << y << endl;
}

