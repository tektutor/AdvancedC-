#ifndef __MATHFACTORY__H
#define __MATHFACTORY__H

#include<map>
#include <iostream>
using namespace std;

#include "Addition.h"
#include "Subtraction.h"
#include "Multiplication.h"
#include "Division.h"

class MathFactory {
private:
	static map<string, MathObject*> mathObjectMap;
	static void populateMathFactory();
public:
	MathFactory();
	static MathObject* get ( string mathOperator );
};


#endif /* __MATHFACTORY__H */
