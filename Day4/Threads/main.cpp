#include <pthread.h>
#include <iostream>
#include <string>
#include <unistd.h>
using namespace std;

void* threadProc ( void * param ) {
	string *pThreadName = static_cast<string*>( param );
	cout << "Inside " << *pThreadName << "."<< endl;

	for ( int count=0; count<3; ++count ) {
		cout << "Thread " << pthread_self() <<  endl; 
		sleep ( 1 );
	}

	pthread_exit(0);
}

int main ( ) {
	pthread_t thread1, thread2;

	string name1 = "Thread 1";
	string name2 = "Thread 2";

	pthread_create ( &thread1, NULL, threadProc, &name1);
	pthread_create ( &thread2, NULL, threadProc, &name2);

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	return 0;
}
