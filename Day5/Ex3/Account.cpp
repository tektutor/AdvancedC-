#include "Account.h"

Account::Account() {
	balanceInAccount = 5000.0;
}

double Account::getBalance() {
	return balanceInAccount;
}

void Account::deposit ( double amount ) {
	double balance = getBalance();
	balance = balance + amount;
	updateBalance ( balance );
}

void Account::withdraw ( double amount ) {
	double balance = getBalance();
	if ( balance < amount ) {
		cout << "Insufficient balance, withdraw not allowed." << endl;
		return;
	}

	balance = balance - amount;
	updateBalance ( balance );
}

void Account::updateBalance ( double amount ) {
	balanceInAccount = amount;
}
