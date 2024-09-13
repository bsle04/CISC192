#include <iostream>
#include <cmath>

using namespace std;

int findSlices(int diameter){
    const double PI = 3.141592653;
    double area = (PI)*(diameter/2)*(diameter/2);
    double var = area/16.225;
    return floor(var);
}

int findPizzas(int slicesPerPizza, int people, int slicesPerPerson){
    int totalSlices = people * slicesPerPerson;
    double pizzas = totalSlices/slicesPerPizza;
    return ceil(pizzas);
}
int main() {
    int diameter, people, slicesPerPerson, slicesPerPizza;
    cout << "Enter pizza diameter (inches): ";
    cin >> diameter;
    cout << "\nEnter number of people: ";
    cin >> people;
    cout << "\nEnter average number slices per person: ";
    cin >> slicesPerPerson;
    slicesPerPizza = findSlices(diameter);
    cout << "\nEach " << diameter << " inch pizza yields " << slicesPerPizza << " slices. You should order " << findPizzas(slicesPerPizza, people, slicesPerPerson) << " pizzas for " << people << " people.\n";
    return 0;
}
