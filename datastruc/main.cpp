#include <iostream>
using namespace std;

int main() {
    int newArray[100];
    for(int i = 0; i < 100; i++){
        newArray[i] = i+1;
    }
    for(int i = 0; i < 100; i++){
        cout << newArray[i] << " - Size of element: " << sizeof(newArray[i]) << endl;
    }
    cout << &newArray;
    return 0;
}
