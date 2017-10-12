#include "SmartPointer.h"

int main () {

	SmartPointer smartPtr(new MyClass(10));
	smartPtr->print();

	return 0;
}


