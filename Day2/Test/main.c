#include <stdio.h>

int F( ) {
	printf ( "Function F invoked \n");
}

int main ( ) {

	F();
	F(10);
	F("Hello");
	F(10, 20);

	return 0;
}

