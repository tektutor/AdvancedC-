#include "Derived.h"

class Test {};

class Monkey {
	public:
		int x;
	public:
		Monkey() : x(100) {}
		void print() {
			cout << "Monkey print function" << endl;
		}
};
class Donkey{
	public:
		int x;
};

void F1(int x) {
	cout << "Function 1" << endl;
}

void F2(int x) {
	cout << "Function 2" << endl;
}

void F3(const int x) {
	cout << "Function 3" << endl;
}

int main ( ) {

	void (*ptr)(int) = F1;
	ptr(100);


	Base *ptr = new Derived;
	ptr->F1();
	Derived *ptrDerived = dynamic_cast<Derived*>(ptr);

	Derived *ptrD = new Derived;
	Base *ptr1 = ptrD;
	ptr1->F1();
	//ptr1->F3();

	Monkey *ptrMonkey = new Monkey;
	Donkey *ptrDonkey = (Donkey*)ptrMonkey;
	cout << ptrDonkey->x;


	Test testObj;
	cout << "Size of class Test" << sizeof(testObj) << endl;

//	Base baseObj;
//	Derived derivedObj;

//	cout << "Size of Base obj" << sizeof(baseObj) << endl;
//	cout << "Size of Derived obj" << sizeof(derivedObj) << endl;

	delete ptr;

	return 0;
}
