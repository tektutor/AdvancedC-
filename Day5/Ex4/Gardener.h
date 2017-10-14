#ifndef __GARDENER__H
#define __GARDENER__H

#include <thread>
#include <mutex>
#include <condition_variable>
#include <chrono>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;


enum GardenerType {
	DIGGER,
	PLANTER,
	FILLER
};

class Gardener {
public:
	static mutex diggerMutex;
	static condition_variable startNotification;
private:
	static mutex diggerPlanterMutex;
	static mutex planterFillerMutex;

	static condition_variable diggerNotification;
	static condition_variable planterNotification;
	GardenerType typeOfGardener;
	thread *pGardener;
	bool isStopped;
	void run();
public:
	Gardener(GardenerType);
	~Gardener();
	void start();
	void stop();
	void join();
	void detach();
	void sleep();
};

#endif /*  __GARDENER__H */
