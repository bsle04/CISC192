#include <iostream>
using namespace std;

int main() {
    int distance5Hours, distance8Hours, distance12Hours;
    const int speed = 60;
    distance5Hours = speed * 5;
    distance8Hours = speed * 8;
    distance12Hours = speed * 12;
    cout << "The car will travel the following distances:\n" << distance5Hours << " miles in 5 hours.\n" << distance8Hours << " miles in 8 hours.\n" << distance12Hours << " miles in 12 hours.";
    return 0;
}
