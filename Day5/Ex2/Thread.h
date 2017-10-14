#include <thread>
#include <chrono>
#include <iostream>
using namespace std;

class Thread {
private:
	thread *pThread;
	bool isStopped;
	void run();
public:
	Thread();
	~Thread();
	void start();
	void stop();
	void join();
	void detach();
	void sleep();
};

