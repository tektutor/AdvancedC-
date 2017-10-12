#include <list>
#include <iterator>
#include <algorithm>
#include <iostream>
using namespace std;

int main ( ) {
	list<int> l;

	l.push_back ( 100 );
	l.push_back ( 500 );
	l.push_back ( 200 );
	l.push_back ( 140 );
	l.push_back ( 40 );

	cout << endl << "List entries before sorting are ..." << endl;
	copy ( l.begin(), l.end(), ostream_iterator<int>(cout, "\t"));

	l.sort();

	cout << endl << "List entries after sorting are ..." << endl;
	copy ( l.begin(), l.end(), ostream_iterator<int>(cout, "\t"));

	reverse ( l.begin(), l.end() );
	cout << endl << "List entries after reversing are ..." << endl;
	copy ( l.begin(), l.end(), ostream_iterator<int>(cout, "\t"));

	cout << endl << "Enter the value you would like to find :" ;
	int value = 0;
	cin >> value;

	list<int>::iterator pos = find ( l.begin(), l.end(), value );
	if ( pos != l.end() )
		cout << *pos << " is found in the list." << endl;
	else
		cout << value <<  " is not found in the list." << endl; 

	return 0;
}

