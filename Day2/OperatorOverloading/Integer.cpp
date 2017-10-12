#include "Integer.h"
#if 1
ostream& operator << ( ostream& out, const Integer & obj) {
	out << obj.number;
	return out;
}
#endif

Integer::Integer( int data ) {
	cout << "Integer Overloaded constructor " << endl;
	number = data;
}

Integer::Integer ( const Integer& originalObject ) {
	cout << "Integer copy constructor " << endl;
	number = originalObject.number;
}

Integer& Integer::operator = ( const Integer &originalObject ) {
	if ( this == &originalObject)
		return *this;

	cout << "Integer assignment operator" << endl;
	number = originalObject.number;
	return *this;
}

Integer::~Integer() {
	cout << "Integer destructor " << endl;
}

Integer Integer::operator + (Integer anotherInteger) {
	Integer result =  number + anotherInteger.number;
	return result;
}

void Integer::print() {
	cout << number << endl;
}

#if 0
ostream& Integer::operator << (ostream& out) {
	out << number;
	return out;
}
#endif
