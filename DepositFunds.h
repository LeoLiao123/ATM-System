#pragma once
#include<iostream>
#include "Account.h"
using namespace std;
class Depositfunds :public Account {
public:
	Depositfunds(Account user) :Account(user) {

	}
	double HowMuchMoneyDoYouWantToPut() {
		double money;
		cout << "Please enter a deposit amount in CENTS (or 0 to cancel): ";
		cin >> money;
		cout << endl;
		money /= 100;
		cout << "Please insert a deposit envelope containing $" << fixed << setprecision(2) << money << " in the deposit slot." << endl;
		cout << "Your envelope has been received." << endl;
		cout << "NOTE: The money deposited will not be available until we" << endl;
		cout << "verify the amount of any enclosed cash, and any enclosed checks clear." << endl;
		cout << endl;
		return money;
	}
};