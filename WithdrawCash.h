#pragma once
#include<iostream>
#include "Account.h"
using namespace std;
class WithdrawCash :public Account {
public:
	WithdrawCash(Account user) :Account(user) {

	}
	double HowMuchMoneyDoYouWantToTake() {
		int choice;
		cout << "Withdrawal options:" << endl;
		cout << "1 - $20" << endl;
		cout << "2 - $40" << endl;
		cout << "3 - $60" << endl;
		cout << "4 - $100" << endl;
		cout << "5 - $200" << endl;
		cout << "6 - Cancel transaction" << endl;
		cout << endl;
		cout << "Choose a withdrawal option (1-6): ";
		cin >> choice;
		cout << endl;
		if (choice != 6) {
			cout << "Please take your cash from the cash dispenser." << endl;
			cout << endl;
		}
		double ReturnValue = 0;
		if (choice == 1)
			ReturnValue = 20;
		else if (choice == 2)
			ReturnValue = 40;
		else if (choice == 3)
			ReturnValue = 60;
		else if (choice == 4)
			ReturnValue = 100;
		else if (choice == 5)
			ReturnValue = 200;
		return ReturnValue;
	}
};