#include <iostream>
using namespace std;

int maxProfit(int prices[], int length) {
    int maxProfit = INT_MIN;
    int minPrice = INT_MAX;
    for(int i = 0; i < length; i++){
        if(prices[i] < minPrice) minPrice = prices[i];
        if(prices[i] - minPrice > maxProfit) maxProfit = prices[i] - minPrice;
    }
    return maxProfit;
}

int main() {
    int prices[] = {10, 7, 5, 8, 11, 2, 6};
    int length = sizeof(prices)/sizeof(prices[0]);
    cout << maxProfit(prices, length);
    return 0;
}
