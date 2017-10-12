#include <map>
#include <algorithm>
#include <iterator>
#include <iostream>
using namespace std;

int main ( ) {

	map<int, string> contacts;

	contacts[123] = "Jegan";
	contacts[231] = "Kumar";
	contacts[315] = "Sharma";

	map<int,string>::iterator pos = contacts.begin();
	while ( pos != contacts.end() ) {
		cout << "\n Key is " << pos->first << " and value is " << pos->second << endl;
		++pos;
	}

	pos = contacts.find( 315 ); 
	if ( pos != contacts.end() ) {
		cout << "Contact name " << pos->second << " is deleted."<< endl;
		contacts.erase ( pos );
	}
	else
		cout << "Unknown contact" << endl;

	cout << "\nContacts after deleting ... " << endl;
	pos = contacts.begin();
	while ( pos != contacts.end() ) {
		cout << "\n Key is " << pos->first << " and value is " << pos->second << endl;
		++pos;
	}

	return 0;
}

