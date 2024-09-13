#include <iostream>
#include <cmath>

using namespace std;

int findSlices(int diameter){
    int slices;
    const double PI = 3.141592653;
    double totalArea;
    totalArea = (diameter/2)*(diameter/2)*(PI);
    slices = floor(totalArea/16.225);
    return slices;
}

int findPizzas(int slicesPerPerson, int slices, int people){
    int currentSlices = 0;
    int pizzas = 0;
    int totalSlicesNeeded;
    totalSlicesNeeded = slicesPerPerson * people;
    while(currentSlices < totalSlicesNeeded){
        pizzas++;
        currentSlices += slices;
    }
    return pizzas;
}
int main() {
    int diameter, people, slicesPerPerson;
    cout << "Enter pizza diameter (inches): ";
    cin >> diameter;
    cout << "\nEnter number of people: ";
    cin >> people;
    cout << "\nEnter average number slices per person: ";
    cin >> slicesPerPerson;
    cout << "\nEach " << diameter << " inch piza yields " << findSlices(diameter) << " slices. You should order " << findPizzas(slicesPerPerson, findSlices(diameter), people) << " pizzas for " << people << " people.";
    return 0;
}
