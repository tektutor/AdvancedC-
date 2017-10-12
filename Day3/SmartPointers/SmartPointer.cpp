#include "SmartPointer.h"

SmartPointer::SmartPointer(MyClass *ptrMyClass) {
	this->ptrMyClass = ptrMyClass;
}

SmartPointer::~SmartPointer() {
	if ( NULL != ptrMyClass )
		delete ptrMyClass;
	ptrMyClass = NULL;
}

MyClass SmartPointer::operator *() {
	return *ptrMyClass;
}

MyClass* SmartPointer::operator ->( ) {
	return ptrMyClass;
}

