#include <iostream>
#include <memory>
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

int main ( ) {
	auto_ptr<MyClass> ptr1( new MyClass(100) );
	ptr1->print();

	//ptr1 will release the ownership of MyClass heap object
	//owenership of MyClass heap allocated object will be transferred to ptr2
	auto_ptr<MyClass> ptr2 = ptr1;
	ptr2->print(); // This is legal

	///ptr1->print(); // This is illegal as ptr1 is no more pointing to MyClass object
	return 0;
}



