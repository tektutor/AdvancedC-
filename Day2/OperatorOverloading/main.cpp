#include "Integer.h"

int main( ) {

	Integer n1(100);
	Integer n2(200);
	Integer n3(200);

	cout << "First integer : " << n1 << endl;
	//n1.print();
	cout << "Second integer : " << n2 << endl;
	//n2.print();

	Integer result = n1 + n2 + n3;
	cout << "The result of addition is " << result << endl; //result.print() ;

	cout << "Assignment operator scenario " << endl;
	n3 = n2 = n1;
	//n3.print();
	cout << n3 << endl;

	return 0;
}
