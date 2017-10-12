#include <iostream>
using namespace std;

class MyClass {
private:
	const int x;
	int y;
public:
	MyClass() : x(10), y(20) {
	}

	void print ( ) {
		cout << "Value of x is " << x << endl;
		cout << "Value of y is " << y << endl;
	}

};

int main ( ) {

	MyClass obj;
	obj.print();

	return 0;
}

