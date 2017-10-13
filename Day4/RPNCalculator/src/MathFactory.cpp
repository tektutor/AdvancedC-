#include "MathFactory.h"

map<string, MathObject*> MathFactory::mathObjectMap;

void MathFactory::populateMathFactory() {
	if ( mathObjectMap.empty() ) {
		mathObjectMap.insert ( make_pair( "+" , new Addition() ) );
		mathObjectMap.insert ( make_pair( "-" , new Subtraction() ) );
		mathObjectMap.insert ( make_pair( "*" , new Multiplication() ) );
		mathObjectMap.insert ( make_pair( "/" , new Division() ) );
	}
}

MathFactory::MathFactory() {
}

MathObject* MathFactory::get ( string mathOperator ) {
	populateMathFactory();
	map<string, MathObject*>::iterator pos
		= mathObjectMap.find ( mathOperator );

	MathObject *pMathObject = NULL;

	if ( pos != mathObjectMap.end( ) )
		pMathObject = pos->second; 

	return pMathObject;
}

#if 0
int main ( ) {
	MathObject *pSubtraction = MathFactory::get( "-" );
	cout << "Result is " << pSubtraction->evaluate ( 100, 20 ) << endl;
	MathObject *pMultiplication= MathFactory::get( "*" );
	cout << "Result is " << pMultiplication->evaluate ( 100, 10 ) << endl;
	MathObject *pDivision = MathFactory::get( "/" );
	cout << "Result is " << pDivision->evaluate( 100, 10 ) << endl;
	return 0;
}
#endif
