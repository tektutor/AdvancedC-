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
	shared_ptr<MyClass> ptr1( new MyClass(100) );
	ptr1->print();

	cout << "\nReference count " << ptr1.use_count() << endl;

	{
		shared_ptr<MyClass> ptr2 = ptr1;
		ptr2->print();
		cout << "\nReference count " << ptr2.use_count() << endl;
	}
	cout << "\nReference count " << ptr1.use_count() << endl;

	return 0;
}



