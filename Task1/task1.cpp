#include <iostream>
#include <unordered_set>
using namespace std;

string result[2] = {"",""};

void findCommonPlayers(string a[][3], int aLength, string b[][3], int bLength){
    //get list of full names from first array, add in set
    unordered_set<string> set;
    string temp;
    int pos = 0;
    for(int i = 0; i < aLength; i++){
        temp = a[i][0] + " " + a[i][1];
        set.insert(temp);
    }
    for(int i = 0; i < bLength; i++){
        temp = b[i][0] + " " + b[i][1];
        if(set.find(temp) != set.end()){
            result[pos] = temp;
            pos++;
        }
    }
}

int main() {
    string basketball_players[5][3] = {
            {"Jill", "Huang", "Gators"},
    {"Janko", "Barton", "Sharks"},
    {"Wanda", "Vakulskas",  "Sharks"},
    {"Jill",  "Moloney",  "Gators"},
    {"Luuk", "Watkins",  "Gators"}
};

    string football_players[5][3] = {
            {"Hanzla",  "Radosti", "32ers"},
            {"Tina", "Watkins", "Barleycorns"},
            {"Alex",  "Patel",  "32ers"},
            {"Jill",  "Huang",  "Barleycorns"},
            {"Wanda", "Vakulskas",  "Barleycorns"}
    };

    findCommonPlayers(basketball_players, 5, football_players, 5);

    cout << result[0] << endl << result[1] << endl;

    return 0;
}


