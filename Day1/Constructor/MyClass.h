#include <iostream>
using namespace std;

class MyClass {
private:
	int x, y;
public:
	MyClass(); //Default constructor
	MyClass(int x, int y); //Overloaded constructor 
	explicit MyClass(int); //Overloaded constructor
	~MyClass();
	void print();

};


