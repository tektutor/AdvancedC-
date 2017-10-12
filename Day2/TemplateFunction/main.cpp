#include <iostream>
#include "Integer.h"
using namespace std;

template <typename T>
void swapFunction ( T &x, T &y ) {
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template <typename T>
void sort( T a[], int len ) {
	for (int i=0; i<len; ++i ) {
		for ( int j=0; j<len; ++j ) {
			if ( a[i] < a[j])
				swapFunction( a[i], a[j]);
		}
	}
}

template <class T>
void print ( T a[], int len ) {
	for ( int i=0; i<len; ++i )
		cout << a[i] << "\t";
	cout << endl;
}

void printInteger( Integer* a[], int len ) {
	for ( int i=0; i<len; ++i )
		cout << *a[i] << "\t";
	cout << endl;

}

int main ( ) {

	int a[5] = { 0, 5, 11, 2, 1};

	cout << endl << "Int Array values before sorting ...." << endl;
	print<int>(a,5 );

	sort<int>( a, 5 );

	cout << endl << "Int Array values after sorting ...." << endl;
	print<int>(a,5 );

	long l[5] = { 10l, 20l, 5l, 0l, 7l};
	cout << endl << "Long Array values before sorting ...." << endl;
	print<long>(l,5 );

	sort<long>( l, 5 );

	cout << endl << "Long Array values after sorting ...." << endl;
	print<long> (l,5 );

	Integer *ptrIntArray[5];
	ptrIntArray[0] = new Integer(5);
	ptrIntArray[1] = new Integer(15);
	ptrIntArray[2] = new Integer(25);
	ptrIntArray[3] = new Integer(7);
	ptrIntArray[4] = new Integer(57);

	cout << endl << "Int object Array values before sorting ...." << endl;
	printInteger(ptrIntArray,5 );

	sort<Integer*>( ptrIntArray, 5 );

	cout << endl << "Int object Array values after sorting ...." << endl;
	printInteger(ptrIntArray,5 );

	return 0;
}

