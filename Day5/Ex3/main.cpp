#include "Thread.h"

int main ( ) {

	Account account;

	Thread depositor( &account, DEPOSITER );
	Thread withdrawer ( &account, WITHDRAWER );

	depositor.start();
	withdrawer.start();

	depositor.join();
	withdrawer.join();

	return 0;
}

