#include <gtest/gtest.h>

#include "RPNCalculator.h"

TEST ( RPNCalculatorTest, testSimpleAddition ) {

	RPNCalculator rpnCalculator;

	double actualResult = rpnCalculator.evaluate ( "10 15 +" );
	double expectedResult = 25.0;
	EXPECT_EQ ( expectedResult, actualResult );

	actualResult = rpnCalculator.evaluate ( "100 15 +" );
	expectedResult = 115.0;
	EXPECT_EQ ( expectedResult, actualResult );

}

TEST ( RPNCalculatorTest, testSimpleSubtraction ) {

	RPNCalculator rpnCalculator;

	double actualResult = rpnCalculator.evaluate ( "100 15 -" );
	double expectedResult = 85.0;
	EXPECT_EQ ( expectedResult, actualResult );

	actualResult = rpnCalculator.evaluate ( "10 5 -" );
	expectedResult = 5.0;
	EXPECT_EQ ( expectedResult, actualResult );

}

TEST ( RPNCalculatorTest, testSimpleMultiplication ) {

	RPNCalculator rpnCalculator;

	double actualResult = rpnCalculator.evaluate ( "100 15 *" );
	double expectedResult = 1500.0;
	EXPECT_EQ ( expectedResult, actualResult );

	actualResult = rpnCalculator.evaluate ( "10 5 *" );
	expectedResult = 50.0;
	EXPECT_EQ ( expectedResult, actualResult );

}

TEST ( RPNCalculatorTest, testSimpleDivision ) {

	RPNCalculator rpnCalculator;

	double actualResult = rpnCalculator.evaluate ( "100 10 /" );
	double expectedResult = 10.0;
	EXPECT_EQ ( expectedResult, actualResult );

	actualResult = rpnCalculator.evaluate ( "10 5 /" );
	expectedResult = 2.0;
	EXPECT_EQ ( expectedResult, actualResult );

}

TEST ( RPNCalculatorTest, testComplexRPNMathExpression ) {

	RPNCalculator rpnCalculator;

	double actualResult = rpnCalculator.evaluate ( "100 20 / 200 5 * +" );
	double expectedResult = 1005.0;
	EXPECT_EQ ( expectedResult, actualResult );

}
