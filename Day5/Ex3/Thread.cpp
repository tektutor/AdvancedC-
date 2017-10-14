#include "Thread.h"

mutex Thread::locker;

Thread::Thread(Account *ptrAccount, ThreadType typeOfThread) {
	cout << "Thread constructor ..." << endl;

	this->ptrAccount = ptrAccount;
	this->typeOfThread = typeOfThread;

	pThread = NULL;
	isStopped = true;

	name = ( typeOfThread == WITHDRAWER ) ? "WITHDRAWER" : "DEPOSITER";
}

Thread::~Thread() {
	cout << "Thread destructor ..." << endl;
	if ( NULL != pThread) {
		pThread->detach();
	        delete pThread;
	}
}

void Thread::start() {
	pThread = new thread(&Thread::run, this );
}

void Thread::run() {
	isStopped = false;
	while ( ! isStopped  ) {
		switch ( typeOfThread ) {
			case DEPOSITER:
				locker.lock();

				cout << name << " : "
				     << " balance before deposit is "
				     << ptrAccount->getBalance() << endl;

				ptrAccount->deposit ( 2000.0 );

				cout << name << " : "
				     << " balance after deposit is "
				     << ptrAccount->getBalance() << endl;

				locker.unlock();

				//this_thread::sleep_for ( 1s ); works from C++14
				this_thread::sleep_for ( chrono::seconds(1) ); //C++11

				break;

			case WITHDRAWER:
				locker.lock();

				cout << name << " : "
				     << " balance before withdraw is "
				     << ptrAccount->getBalance() << endl;

				ptrAccount->withdraw ( 1000.0 );

				cout << name << " : "
				     << " balance after withdraw is "
				     << ptrAccount->getBalance() << endl;

				locker.unlock();

				this_thread::sleep_for ( chrono::seconds(1) );

				break;
		}
	}
}

void Thread::join() {
	pThread->join();
}

void Thread::detach() {
	pThread->detach();
}

void Thread::stop() {
	isStopped = true;
}
