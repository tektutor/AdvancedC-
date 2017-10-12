#ifndef __INTEGER__H
#define __INTEGER__H

#include <iostream>
using namespace std;

class Integer {
private:
	int number;
public:
	Integer(int);
	Integer(const Integer&);
	Integer& operator =(const Integer&);
	~Integer();
	int add(int);
	void print();

//	ostream& operator << (ostream& );
	friend ostream& operator << (ostream&, const Integer&);

	Integer  operator + ( Integer anotherInteger );
	bool operator < ( const Integer &rhsObject );
};

#endif /* __INTEGER__H */
