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

