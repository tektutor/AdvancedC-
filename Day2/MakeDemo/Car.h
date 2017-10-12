#include <iostream>
using namespace std;

class Car {
public:
	Car() { cout << "Car constructor ...." << endl;}
	~Car() { cout << "Car destructor ...." << endl;}
	virtual void drive() {
		cout << "Car drive method ..." << endl;
	}
};
