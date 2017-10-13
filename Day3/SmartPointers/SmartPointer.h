#include <iostream>
using namespace std;

template <typename T>
class SmartPointer {
private:
	T *ptrClass;
public:
	SmartPointer(T *);
	~SmartPointer();
	T operator * ( );
	T* operator -> ( );
};

template <typename T>
SmartPointer<T>::SmartPointer(T *ptrClass) {
	this->ptrClass = ptrClass;
}

template <typename T>
SmartPointer<T>::~SmartPointer() {
	if ( NULL != ptrClass )
		delete ptrClass;
	ptrClass = NULL;
}

template <typename T>
T SmartPointer<T>::operator *() {
	return *ptrClass;
}

template <typename T>
T* SmartPointer<T>::operator ->( ) {
	return ptrClass;
}

