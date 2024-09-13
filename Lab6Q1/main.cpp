#include <iostream>
using namespace std;

void printPattern(int height, int width){
    height = (height*2) + 1;
    width = (width*2) + 1;
    for(int i = 0; i < height; i++){
        if(i%2 == 0){
            for(int i = 0; i < width; i++){
                cout << "*";
            }
            cout << "\n";
        }else{
            for(int i = 0; i < width; i++){
                if(i%2 == 0){
                    cout << "*";
                }else{
                    cout << "0";
                }
            }
            cout << "\n";
        }
    }
}

int main() {
    int height, width;
    cout << "How many 0s tall?\n";
    cin >> height;
    cout << "How many 0s wide?\n";
    cin >> width;
    printPattern(height, width);
    return 0;
}


