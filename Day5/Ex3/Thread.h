#include <thread>
#include <mutex>
#include <chrono>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "Account.h"

enum ThreadType {
	DEPOSITER,
	WITHDRAWER
};

class Thread {
private:
	static mutex locker;
	Account *ptrAccount;
	ThreadType typeOfThread;
	string name;
	thread *pThread;
	bool isStopped;
	void run();
public:
	Thread(Account *, ThreadType);
	~Thread();
	void start();
	void stop();
	void join();
	void detach();
	void sleep();
};
