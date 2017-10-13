#ifndef __MOTHER__H
#define __MOTHER__H

#include <iostream>
#include <memory>
using namespace std;

class Child;

class Mother {
private:
	weak_ptr<Child> child;
public:
	Mother() {
		cout << "Mother constructor" << endl;
	}

	~Mother() {
		cout << "Mother destructor" << endl;
	}

	void print() {
		cout << "Mother print" << endl;
	}

	void setChild ( shared_ptr<Child> child ) {
		this->child = child;
	}
};

#endif /* __MOTHER__H */
