#include "Thread.h"

int Thread::count = 0;

Thread::Thread() {
	cout << "Thread constructor ..." << endl;
	pThread = NULL;
	isStopped = true;

	++count;
	name = "Thread ";

	stringstream strStream;
	strStream << count;

	name.append ( strStream.str() );
}

Thread::~Thread() {
	cout << "Thread destructor ..." << endl;
	if ( NULL != pThread) {
		//pThread->detach();
	        //delete pThread;
	}
}

void Thread::start() {
	pThread = new thread(&Thread::run, this );
}

void Thread::run() {
	isStopped = false;

	while ( ! isStopped ) {
		cout << name << "( " << pThread->get_id()
		     << " )"<< endl;
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
