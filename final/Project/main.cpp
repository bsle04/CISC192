#include<iostream>
#include<String>

using namespace std;

static int hungerLevel = 0;
static int boredomLevel = 0;
static int foodAmt = 3;
static int funAmt = 3;
static int timeAmt = 1;
static string petName = "your pet";
static bool gameRunning = true;
static string choice;

int PetMood();
void Talk();
void PassTime(int);
void FeedPet();
void Play();
void DisplayPetBehavior();
void menu();

int main() {
    cout << "Welcome to PetSim! :)" << endl;
    cout << "What would you like to name your pet?: ";
    cin >> petName;
    cout << endl;
    menu();
    return 0;
}
void menu() {
    while(gameRunning){
        cout << endl << "What would you like to do with Sparky?" << endl << "************************" << endl << "1 - Listen to Pet" << endl;
        cout << "2 - Feed Pet" << endl << "3 - Play with Pet" << endl << "4 - Exit Game" << endl << "Enter your choice: ";
        cin >> choice;
        if(choice == "1"){
            Talk();
        }else if(choice == "2"){
            FeedPet();
        }else if(choice == "3"){
            Play();
        }else if(choice == "4"){
            cout << "Exiting..." << endl;
            gameRunning = false;
        }else{
            cout << "ERROR: Invalid selection. Please try again." << endl;
        }
    }
}
void Talk() {
    int moodLevel = PetMood();
    string mood = "none";
    if (moodLevel < 7) {
        mood = "Happy";
    }
    else if (moodLevel >= 7 && moodLevel < 16) {
        mood = "Okay";
    }
    else if (moodLevel >= 16 && moodLevel <= 21) {
        mood = "Frustrated";
    }
    else if (moodLevel > 21) {
        mood = "Mad";
    }
    cout << petName << "'s current mood is: " << mood << endl;

    PassTime(timeAmt);
    DisplayPetBehavior();
}
void FeedPet() {
    if (hungerLevel >= foodAmt) {
        hungerLevel -= foodAmt;
    }
    else {
        hungerLevel = 0;
    }

    cout << petName << " has been fed." << endl;

    PassTime(timeAmt);
    DisplayPetBehavior();
}
void Play() {
    if (boredomLevel >= funAmt) {
        boredomLevel -= funAmt;
    }
    else {
        boredomLevel = 0;
    }

    cout << petName << " was allowed to play." << endl;
    PassTime(timeAmt);
    DisplayPetBehavior();
}
void PassTime(int timeAmt) {
    hungerLevel += timeAmt;
    boredomLevel += timeAmt;
}
int PetMood() {
    int mood = hungerLevel + boredomLevel;
    return mood;
}
void DisplayPetBehavior() {
    if (hungerLevel < 3 && boredomLevel < 3) {
        cout << petName << " is neither hungry or bored." << endl;
    }
    else if (boredomLevel >= 3 && boredomLevel <= 11) {
        cout << petName << " is a little bored." << endl;
    }
    else if (boredomLevel > 11) {
        cout << petName << " is very bored." << endl;
    }
    if (hungerLevel >= 3 && hungerLevel <= 11) {
        cout << petName << " is moderately hungry." << endl;
    }
    else if (hungerLevel > 11) {
        cout << petName << " is very hungry." << endl;
    }
    cout << "Hunger Level: " << hungerLevel << endl
         << "Boredom Level: " << boredomLevel << endl;
}
