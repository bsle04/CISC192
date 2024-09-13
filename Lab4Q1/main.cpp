#include <iostream>
using namespace std;

int findFactorial(int n){
    int factorial;
    factorial = 1;
    for(int i = n; i > 0; i--){
        factorial = factorial * i;
    }
    return factorial;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "The factorial of " << n << " is " << findFactorial(n) << ".\n";
    return 0;
}
