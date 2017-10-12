#include <vector>
#include <iterator>
#include <algorithm>
#include <iostream>
using namespace std;

int main ( ) {

	vector<int> v;

	cout << "\nInitial Size of vector is " << v.size() << endl;
	cout << "\nInitial Capacity of vector is " << v.capacity() << endl;

	v.push_back( 10 );
	cout << "\nSize of vector is " << v.size() << endl;
	cout << "\nCapacity of vector is " << v.capacity() << endl;

	v.push_back( 20 );
	cout << "\nSize of vector is " << v.size() << endl;
	cout << "\nCapacity of vector is " << v.capacity() << endl;

	v.push_back( 30 );
	cout << "\nSize of vector is " << v.size() << endl;
	cout << "\nCapacity of vector is " << v.capacity() << endl;

	v.push_back( 40 );
	cout << "\nSize of vector is " << v.size() << endl;
	cout << "\nCapacity of vector is " << v.capacity() << endl;

	v.push_back( 40 );
	cout << "\nSize of vector is " << v.size() << endl;
	cout << "\nCapacity of vector is " << v.capacity() << endl;
	v.push_back( 40 );
	v.push_back( 40 );
	v.push_back( 40 );
	v.push_back( 40 );
	v.push_back( 40 );
	v.push_back( 40 );
	v.push_back( 40 );

	cout << "\nSize of vector is " << v.size() << endl;
	cout << "\nCapacity of vector is " << v.capacity() << endl;
	vector<int>::iterator pos = v.begin();

	cout << "\nVector entries are ..." << endl;
	while ( pos != v.end() ) {
		cout << *pos << endl;
		++pos;
	}

	return 0;
}


