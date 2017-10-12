#ifndef __VEHICLE__H
#define __VEHICLE__H

#include <iostream>
using namespace std;

class Vehicle {
public:
	Vehicle() { cout << "Vehicle constructor ..."<< endl;}
	~Vehicle() { cout << "Vehicle destructor ..."<< endl;}
	virtual void startEngine() = 0;
	virtual void stopEngine() = 0;
};


#endif /* __VEHICLE__H */
