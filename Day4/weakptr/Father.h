#ifndef __FATHER__H
#define __FATHER__H

#include <iostream>
#include <memory>
using namespace std;

class Child;

class Father {
private:
	weak_ptr<Child> child;
public:
	Father() {
		cout << "Father constructor" << endl;
	}

	~Father() {
		cout << "Father destructor" << endl;
	}

	void print() {
		cout << "Father print" << endl;
	}

	void setChild ( shared_ptr<Child> child ) {
		this->child = child;
	}
};

#endif /* __FATHER__H */
