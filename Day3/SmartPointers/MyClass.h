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

	MyClass(const MyClass &rhsObject) {
		cout << "Copy constructor" << endl;
	}

	MyClass& operator = ( const MyClass &rhsObject ) {
		cout << "Assignment operator " << endl;
	}

	~MyClass() {
		cout << "MyClass destructor" << endl;
	}

	void print() {
		cout << "Value of x is " << x << endl;
	}

};
