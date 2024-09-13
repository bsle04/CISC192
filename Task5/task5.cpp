#include <iostream>
using namespace std;

void sort(double readings[], double sortedArray[], int length){
    int temp[21] = {0};
    for(int i = 0; i < length; i++){
        temp[((int) (readings[i] * 10.0)) - 970]++;
    }
    int bruh = 0;
    for(int i = 0; i < 21; i++){
        while(temp[i] > 0) {
            int lol = 970+i;
            sortedArray[bruh] = ((double)lol) / 10.0;
            bruh++;
            temp[i]--;
        }
    }
}
int main() {
    double readings[] = {98.6, 98.0, 97.1, 99.0, 98.9, 97.8, 98.5, 98.2, 98.0, 97.1};
    int length = sizeof(readings)/sizeof(readings[0]);
    double sortedArray[10];
    sort(readings,sortedArray, length);

    for(int i = 0; i < length; i++){ //print the values
        cout << sortedArray[i] << endl;
    }
    return 0;
}
