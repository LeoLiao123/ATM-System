#include<iostream>
#include<iomanip>
#include "Account.h"
#include "DepositFunds.h"
#include "ViewMyBalance.h";
#include "WithdrawCash.h";
using namespace std;
int main() {
	bool re = true;
	Account userA;
	Account userB;
	userA.SetUser(12345, 54321, 1000, 1200);
	userB.SetUser(98765, 56789, 200, 200);//Set two default user to test program
	int verify = 0;
	int Num, Pin;
	while (re) {
		cout << "Welcome!" << endl;
		cout << endl;
		cout << "Please enter your account number: ";
		cin >> Num;
		cout << endl;
		Account User;
		if (Num == 12345) {
			User = userA;
			verify = 1;
		}
		else if (Num == 98765) {
			User = userB;
			verify = 2;
		}
		cout << "Enter your PIN: ";
		cin >> Pin;
		cout << endl;
		if (User.CheckUserPin(Pin)) {
			int choice = 0;
			while (choice != 4) {
				cout << "Main menu:" << endl;
				cout << "1 - View my balance" << endl;
				cout << "2 - Withdraw cash" << endl;
				cout << "3 - Deposit funds" << endl;
				cout << "4 - Exit" << endl;
				cout << "Enter a choice: ";
				cin >> choice;
				cout << endl;
				if (choice == 1) {
					ViewMyBalance View(User);
				}
				else if (choice == 2) {
					WithdrawCash Withdraw(User);
					double ChangeValue = Withdraw.HowMuchMoneyDoYouWantToTake();
					ChangeValue *= -1;
					User.ChangeAvailable(ChangeValue);
					User.ChangeToatal(ChangeValue);

				}
				else if (choice == 3) {
					Depositfunds Dep(User);
					double ChangeValue = Dep.HowMuchMoneyDoYouWantToPut();
					User.ChangeToatal(ChangeValue);
				}
				else if (choice == 4) {
					cout << "Exiting the system..." << endl;
					cout << endl;
					cout << "Thank you! Goodbye!" << endl;
					cout << endl;
				}
				if (verify == 1) {
					userA = User;
				}
				else if (verify == 2) {
					userB = User;
				}
			}
		}
	}
}