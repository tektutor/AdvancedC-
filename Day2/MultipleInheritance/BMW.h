#ifndef __BMW_H
#define __BMW_H

#include "Vehicle.h"
#include "Car.h"

class BMW : public Vehicle, public Car {
public:
	BMW() { cout << "BMW constructor ..." << endl;}
	~BMW() { cout << "BMW destructor ..." << endl;}
	void startEngine();
	void stopEngine();
};

#endif /* __BMW_H */
