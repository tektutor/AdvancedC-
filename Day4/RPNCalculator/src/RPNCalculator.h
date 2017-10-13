#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <memory>
using namespace std;

#include "MathObject.h"
#include "MathFactory.h"

class RPNCalculator {
private:
	stack<double> numberStack;
	double firstNumber, secondNumber, result;
	void extractOperands( );
	bool isMathOperator( string rpnToken );
public:
	RPNCalculator();
	double evaluate ( string );
};
