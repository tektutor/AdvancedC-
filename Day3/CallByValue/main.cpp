#include <iostream>
using namespace std;

void swap (int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void swap (int *x, int *y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

void swapByReference (int &x, int &y) {
	int temp = x;
	x = y;
	y = temp;
}

int main ( ) {
	int a = 100;
	int b = 200;

	cout << "\nCall by value" << endl;
	cout << "Value of a before swapping is " << a << endl;
	cout << "Value of b before swapping is " << b << endl;

	swap ( a, b);

	cout << "Value of a after swapping is " << a << endl;
	cout << "Value of b after swapping is " << b << endl;

	cout << "\nCall by pointer" << endl;
	cout << "Value of a before swapping is " << a << endl;
	cout << "Value of b before swapping is " << b << endl;

	swap ( &a, &b);

	cout << "Value of a after swapping is " << a << endl;
	cout << "Value of b after swapping is " << b << endl;

	cout << "\nCall by reference" << endl;
	cout << "Value of a before swapping is " << a << endl;
	cout << "Value of b before swapping is " << b << endl;

	swapByReference ( a, b);

	cout << "Value of a after swapping is " << a << endl;
	cout << "Value of b after swapping is " << b << endl;

	return 0;
}

