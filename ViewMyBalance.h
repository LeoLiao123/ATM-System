#pragma once
#include<iostream>
#include "Account.h"
using namespace std;
class ViewMyBalance :public Account {
public:
	ViewMyBalance(Account user) :Account(user) {
		cout << "Balance Information:" << endl;
		cout << " - Available balance: $" << fixed << setprecision(2) << AccountAvailable << endl;
		cout << " - Total balance:     $" << fixed << setprecision(2) << AccountTotal << endl;
		cout << endl;
	}
};