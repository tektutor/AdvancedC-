#include <iostream> 
#include <vector>
#include <iterator>
#include <algorithm>
using namespace std;

bool isGreater ( int first, int second ) {
	return  first > second;
}

int main ( ) {

	vector<int> v;

	v.push_back ( 100 );
	v.push_back ( 10 );
	v.push_back ( 70 );
	v.push_back ( 20 );
	v.push_back ( 5 );

	cout << endl << "Vector entries before sort are ..." << endl;
	vector<int>::iterator pos = v.begin();

	copy ( v.begin(), v.end(), ostream_iterator<int>( cout, "\t") );
#if 0
	while ( pos != v.end() ) 
		cout << *pos++ << "\t";
	cout << endl;
#endif

	sort ( v.begin(), v.end(), isGreater );

	cout << endl << "Vector entries after sort are ..." << endl;
	copy ( v.begin(), v.end(), ostream_iterator<int>( cout, "\t") );
#if 0
	pos = v.begin();

	while ( pos != v.end() ) 
		cout << *pos++ << "\t";
	cout << endl;
#endif

	return 0;
}

