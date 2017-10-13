#include <iostream>
#include <memory>
using namespace std;

#include "Father.h"
#include "Mother.h"

class Child {
private:
	shared_ptr<Father> dad;
	shared_ptr<Mother> mom;
public:
	Child(shared_ptr<Father> father, shared_ptr<Mother> mother) {
		cout << "Child constructor" << endl;
		dad = father;
		mom = mother;
	}

	~Child() {
		cout << "Child destructor" << endl;
	}

	void print() {
		cout << "Child print" << endl;
	}
};
