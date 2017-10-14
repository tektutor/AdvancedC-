#include <iostream>
#include <thread>
using namespace std;

void threadProc ( ) {
	cout << "Hello C++ Thread support library !" << endl;
}

class MyThread {
private:
	thread *pThread;
public:
	MyThread() {
	}

	~MyThread() {
		delete pThread;
	}

	void start() {
		pThread = new thread ( &MyThread::run, this );
		pThread->join();
	}

	void run() {
		for (int count=0; count<50; ++count) {
			cout << "C++ Member function used as Thread function"
			     << endl;
		}
	}
};

int main ( ) {

//	thread t1(threadProc);

	MyThread threadObj;
	threadObj.start();

//	t1.join();

	return 0;

}
