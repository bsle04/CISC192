#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter height: ";
    cin >> height;
    cout << "\n";
    cout << string(height,' ') << "*\n";
    for(int i=height-1; i>0; i--){
        cout << string(i,' ') << "*" << string((height-i)*2-1,' ') << "*" << "\n";
    }
    for(int i=2; i<height; i++){
        cout << string(i,' ') << "*" << string((height-i)*2-1,' ') << "*" << "\n";
    }
    cout << string(height,' ') << "*\n";

}