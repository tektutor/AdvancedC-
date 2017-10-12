#include "BMW.h"

void BMW::startEngine() {
	Vehicle::startEngine();
	cout << "BMW startEngine virtual function " << endl;
}

void BMW::stopEngine() {
	Vehicle::stopEngine();
	cout << "BMW stopEngine virtual function " << endl;
}

