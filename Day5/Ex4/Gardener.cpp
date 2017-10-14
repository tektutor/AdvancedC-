#include "Gardener.h"

mutex Gardener::diggerMutex;
condition_variable Gardener::startNotification;

mutex Gardener::diggerPlanterMutex;
mutex Gardener::planterFillerMutex;

condition_variable Gardener::diggerNotification;
condition_variable Gardener::planterNotification;

Gardener::Gardener(GardenerType typeOfGardener) {
	cout << "Gardener constructor ..." << endl;

	this->typeOfGardener = typeOfGardener;

	pGardener = NULL;
	isStopped = true;
}

Gardener::~Gardener() {
	cout << "Gardener destructor ..." << endl;
	if ( NULL != pGardener) {
		pGardener->detach();
	        delete pGardener;
	}
}

void Gardener::start() {
	pGardener = new thread(&Gardener::run, this );
}

void Gardener::run() {
	isStopped = false;
	while ( ! isStopped  ) {
		switch ( typeOfGardener ) {
			case PLANTER: {
				cout << "\nPlanter waiting for mutex ..." << endl;
				unique_lock<mutex> diggerPlanterLock( diggerPlanterMutex );

				cout << "\nPlanter waiting for digger notification ..." << endl;
				diggerNotification.wait( diggerPlanterLock );

				cout << "Planting in progress ..." << endl;
				this_thread::sleep_for ( chrono::seconds(1) );

				cout << "Planting complete ..." << endl;

				planterNotification.notify_one();
				cout << "Planter notified filler ..." << endl;
		        }
			break;

			case DIGGER: {
				cout << "\nDigger waiting for start notification ..." << endl;
				unique_lock<mutex> startLock( diggerMutex );
				startNotification.wait( startLock );

				cout << "\nDigger waiting for mutex ..." << endl;
				unique_lock<mutex> diggerPlanterLock ( diggerPlanterMutex );

				cout << "Acquired mutex and Digging pit ..." << endl;
				this_thread::sleep_for ( chrono::seconds(1) );

				cout << "Digging complete ..." << endl;

				diggerNotification.notify_one();
		        }
			break;

			case FILLER: {
				cout << "\nFiller waiting for mutex ..." << endl;
				unique_lock<mutex> planterFillerLock ( planterFillerMutex);

				cout << "Acquired mutex and filled pit and watered plant ..." << endl;
				this_thread::sleep_for ( chrono::seconds(1) );

				cout << "Filling complete ..." << endl;

				startNotification.notify_one();


		        }
			break;
		}
	}
}

void Gardener::join() {
	pGardener->join();
}

void Gardener::detach() {
	pGardener->detach();
}

void Gardener::stop() {
	isStopped = true;
}
