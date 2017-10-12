#include "MyClass.h"

int main ( ) {

	MyClass obj; //Default constructor
	MyClass obj1(10); //2 Overloaded constructor 
	MyClass obj2(10,20); // 1st overloaded constructor

	//MyClass obj3 = 100;
	obj.print();

	//MyClass obj4 = 100.1;
	//obj4.print();

	return 0;
}
