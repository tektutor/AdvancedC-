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
