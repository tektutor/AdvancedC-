#include <iostream>
using namespace std;

class Base {
private:
	int x, y;
public:
	Base();
	~Base();
	virtual void F1();
	void F2();
};
