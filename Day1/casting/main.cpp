#include <iostream>
using namespace std;

void F1(int x) {
	cout << "Function 1" << endl;
}

void F2(int x) {
	cout << "Function 2" << endl;
}

void F3(const int x) {
	cout << "Function 3 - take const int" << endl;
}

int main ( ) {
	const int a = 3000;

	int *ptr1 = const_cast<int*>(&a);
	*ptr1 = 2000;
	cout << "Value of const int a is " << *ptr1 << endl;

	void (*ptr)(int) = F1;
	ptr(100);

	ptr = F2;
	ptr(200);

	ptr = F3;
	ptr(*ptr1);

	return 0;
}
