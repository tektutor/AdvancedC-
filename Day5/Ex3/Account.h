#include <iostream>
using namespace std;

class Account {
private:
	double balanceInAccount;
	void updateBalance ( double amount );
public:
	Account();
	double getBalance();
	void deposit( double );
	void withdraw ( double );
};
