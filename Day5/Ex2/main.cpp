#include "Thread.h"

int main ( ) {
	cout << "Inside main thread ..." << endl;
	Thread t1, t2, t3;

	cout << "Starting threads ..." << endl;
	t1.start();
	t2.start();
	t3.start();

	this_thread::sleep_for ( 25s );

	cout << "Detaching threading ..." << endl;
	t1.detach();
	t2.detach();
	t3.detach();

	cout << "Main thread put to sleep for 5 seconds ..." << endl;
	this_thread::sleep_for ( 5s );
	cout << "Exiting main thread ..." << endl;

	return 0;
}

