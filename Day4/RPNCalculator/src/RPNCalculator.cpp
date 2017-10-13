#include "RPNCalculator.h"

RPNCalculator::RPNCalculator() {
	firstNumber = secondNumber = result = 0.0;
}

void RPNCalculator::extractOperands( ) {
	secondNumber = numberStack.top();
	numberStack.pop();
	firstNumber = numberStack.top();
	numberStack.pop();
}

bool RPNCalculator::isMathOperator( string rpnToken ) {
	string mathOperators = "+-*/";
	size_t found = mathOperators.find ( rpnToken );
	return ( found != mathOperators.npos );
}

double RPNCalculator::evaluate ( string rpnMathExpression ) {

	stringstream rpnMathTokens ( rpnMathExpression );
	istream_iterator<string> begin(rpnMathTokens);
	istream_iterator<string> end;
	vector<string> rpnTokens ( begin, end );

	vector<string>::iterator token = rpnTokens.begin();

	while ( token != rpnTokens.end() ) {

		if ( isMathOperator( *token ) ) {
			extractOperands();
			MathObject *pMathObject = MathFactory::get(*token);
			result = pMathObject->evaluate ( firstNumber, secondNumber );
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
