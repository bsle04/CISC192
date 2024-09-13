#include <iostream>
using namespace std;

int main(){
    bool running = true;
    int accNum;
    double startingBal, totalItems, totalCredits, limit;
    while(running){
        cout << "Enter account number (or -1 to exit): " << endl;
        cin >> accNum;
        if(accNum == -1){
            cout << "Exiting...";
            break;
        }
        cout << "Enter balance at the beginning of the month: " << endl;
        cin >> startingBal;
        cout << "Enter total of all items charged by this customer this month: " << endl;
        cin >> totalItems;
        cout << "Enter total of all credits applied to this customer's account this month: " << endl;
        cin >> totalCredits;
        cout << "Enter allowed credit limit: " << endl;
        cin >> limit;
        if ((startingBal + totalItems - totalCredits) > limit){
            cout << "Account: " << accNum << endl << "Credit limit: " << limit << endl << "New balance: " << (startingBal + totalItems - totalCredits) << endl;
            cout << "Credit Limit Exceeded." << endl;
        }else{
            cout << "Account: " << accNum << endl << "Credit limit: " << limit << endl << "New balance: " << (startingBal + totalItems - totalCredits) << endl;
            cout << "Credit Limit Not Exceeded." << endl;
        }
    }
    return 0;
}