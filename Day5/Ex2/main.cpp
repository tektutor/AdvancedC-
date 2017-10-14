#include "Thread.h"

int main ( ) {

	Thread t1, t2, t3;

	t1.start();
	t2.start();
	t3.start();

#if 0
	t1.join();
	t2.join();
	t3.join();
#endif

	this_thread::sleep_for ( 10s );

	t1.stop();
	t2.stop();
	t3.stop();

	this_thread::sleep_for ( 5s );

	return 0;
}

