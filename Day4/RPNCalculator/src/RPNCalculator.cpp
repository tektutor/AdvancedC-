#include "RPNCalculator.h"

RPNCalculator::RPNCalculator() {
	firstNumber = secondNumber = result = 0.0;
}

double RPNCalculator::evaluate ( string rpnMathExpression ) {

	stringstream rpnMathTokens ( rpnMathExpression );
	istream_iterator<string> begin(rpnMathTokens);
	istream_iterator<string> end;

	vector<string> rpnTokens ( begin, end );

	vector<string>::iterator token = rpnTokens.begin();

	while ( token != rpnTokens.end() ) {

		if ( "+" == *token ) {
			firstNumber = numberStack.top();
			numberStack.pop();
			secondNumber = numberStack.top();
			numberStack.pop();

			result = firstNumber + secondNumber;

			numberStack.push ( result );
		}
		else
			numberStack.push ( stod (*token) );

		++token;

	}

	result = numberStack.top();
	numberStack.pop();

	return result;
}
