#include <iostream>
#include <string>
#include <stack>
#include <vector>
#include <sstream>
#include <algorithm>
#include <iterator>
#include <memory>

using namespace std;

class RPNCalculator {
private:
	stack<double> numberStack;
	double firstNumber, secondNumber, result;
public:
	RPNCalculator();
	double evaluate ( string );
};
