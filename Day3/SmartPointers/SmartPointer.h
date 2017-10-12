#include <iostream>
using namespace std;

class MyClass {
private:
	int x;
public:
	MyClass(int data) {
		cout << "MyClass constructor " << endl;
		x = data;
	}

	~MyClass() {
		cout << "MyClass destructor" << endl;
	}

	void print() {
		cout << "Value of x is " << x << endl;
	}

};

class SmartPointer {
private:
	MyClass *ptrMyClass;
public:
	SmartPointer(MyClass *);
	~SmartPointer();
	MyClass operator * ( );
	MyClass* operator ->( );
};
