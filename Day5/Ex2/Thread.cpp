#include "Thread.h"

Thread::Thread() {
	cout << "Thread constructor ..." << endl;
	pThread = NULL;
	isStopped = true;
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
	while ( ! isStopped ) {
		cout << "Thread id " << pThread->get_id() << endl;
		this_thread::sleep_for( 1s );
	}
	cout << "Thread " << pThread->get_id() << " stopped as per request ..."
	     << endl;
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
