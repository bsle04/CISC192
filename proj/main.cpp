#include <iostream>
using namespace std;

//Task 1
//void athletes(int array1[], int array2[]);
    //string ret[] = {"", ""};
    //cout << ret[0] << ret[1];
//}

//Task 3
int maxProfit(int prices[], int length){
    int maxProfit = INT_MIN;
    int minPrice = INT_MAX;
    for(int i = 0; i < length; i++){
        if(prices[i] < minPrice){
            minPrice = prices[i];
        }
        if((prices[i] - minPrice) > maxProfit){
            maxProfit = prices[i] - minPrice;
        }
    }
    return maxProfit;
}

int maxProduct(int array[]){
    int length = sizeof(array) / sizeof(array[0]);
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < length; i++){
        if(array[i] > max){
            max = array[i];
        }
        if(array[i] < min){
            min = array[i];
        }

    }
}

int main() {

    //Task 1
    //int basketball_players[] = [
    //{first_name: "Jill", last_name: "Huang", team: "Gators"},
    //{first_name: "Janko", last_name: "Barton", team: "Sharks"},
    //{first_name: "Wanda", last_name: "Vakulskas", team: "Sharks"},
    //{first_name: "Jill", last_name: "Moloney", team: "Gators"},
    //{first_name: "Luuk", last_name: "Watkins", team: "Gators"}
    //];

    //int football_players[] = [
    //{first_name: "Hanzla", last_name: "Radosti", team: "32ers"},
    //{first_name: "Tina", last_name: "Watkins", team: "Barleycorns"},
    //{first_name: "Alex", last_name: "Patel", team: "32ers"},
    //{first_name: "Jill", last_name: "Huang", team: "Barleycorns"},
    //{first_name: "Wanda", last_name: "Vakulskas", team: "Barleycorns"}
    //];

    //Task 2


    //athletes(basketball_players, football_players);

    //Task 3
    //int array[] = {10, 7, 5, 8, 11, 2, 6};
    //int length = sizeof(array) / sizeof(array[0]);
    //cout << maxProfit(array, length);

    //Task 4
    //int nums[] = {5, -10, -6, 9, 4};
    //cout << maxProduct(nums);

    return 0;
}
