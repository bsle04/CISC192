#include <iostream>
using namespace std;

int main() {
    int number,factor, i;
    i = 2;
    cout << "Enter a number: \n";
    cin >> number;
    while (i != 0){
        if(number%i == 0){
            factor = number / i;
            i = 0;
        }else{
            i++;
        }
    }
    cout << "The largest factor of " << number << " is " << factor << ".\n";
    return 0;
}
