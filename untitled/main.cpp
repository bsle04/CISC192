#include <iostream>
using namespace std;

int main() {
    string choice;
    int balance, amount;
    balance = 0;
    while (true) {
        cout << "Input 1 to Check Balance, 2 to Deposit Amount, 3 to Withdraw Amount, or 4 to Exit:\n";
        cin >> choice;
        if (choice == "1") {
            cout << "Your balance is " << balance << ".\n";
        }else if (choice == "2") {
            cout << "Amount to Deposit: \n";
            cin >> amount;
            balance += amount;
            cout << amount << " has been deposited to your balance.\n";
        } else if (choice == "3") {
            cout << "Amount to Withdraw: \n";
            cin >> amount;
            balance -= amount;
            cout << amount << " has been withdrawn from your balance.\n";
        }else if (choice == "4"){
            cout << "Exited successfully.\n";
            return 0;
        }else {
            cout << "Bad input, try again.\n";
        }
    }
}


