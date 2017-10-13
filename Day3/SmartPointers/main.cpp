#include "SmartPointer.h"
#include "MyClass.h"

int main () {
	MyClass *ptr = new MyClass(10);

	SmartPointer<MyClass> smartPtr(ptr);
	smartPtr->print();

	return 0;
}


