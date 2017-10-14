#include "Gardener.h"

int main ( ) {
	unique_lock<mutex> diggerLock ( Gardener::diggerMutex );

	Gardener digger ( DIGGER );
	Gardener planter ( PLANTER );
	Gardener filler ( FILLER );

	planter.start();
	filler.start();

	this_thread::sleep_for( chrono::seconds(3) );
	digger.start();
	this_thread::sleep_for( chrono::seconds(3) );

	Gardener::startNotification.notify_one();
	diggerLock.unlock();

	digger.join();
	planter.join();
	filler.join();

	return 0;
}
