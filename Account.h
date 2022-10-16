#pragma once
#include<iostream>
using namespace std;
class Account {
protected:
	long int AccountNumber;
	long int AccountPin;
	long double AccountAvailable = 0;
	long double AccountTotal = 0;
public:
	void ChangeAvailable(double ChangeValue) {
		AccountAvailable += ChangeValue;
	}
	void ChangeToatal(double ChangeValue) {
		AccountTotal += ChangeValue;
	}
	void SetUser(int num, int pin, int ava, int tot) {
		AccountNumber = num;
		AccountPin = pin;
		AccountAvailable = ava;
		AccountTotal = tot;
	}
	bool CheckUserPin(int pin) {
		if (pin == AccountPin) {
			return true;
		}
		else {
			return false;
		}
	}
	Account() {

	}
	Account(Account &right) {
		AccountAvailable = right.AccountAvailable;
		AccountTotal = right.AccountTotal;
		AccountNumber = right.AccountNumber;
		AccountPin = right.AccountPin;
	}
};