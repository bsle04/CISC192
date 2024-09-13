#include <iostream>
using namespace std;

struct node{
    int vertex;
    struct node* next;
};

struct Graph{
    int numVertices;
    struct node** adjLists;
};

int main() {
    node *one = NULL;
    node *two = NULL;
    node *three = NULL;

    //adding nodes at start
    one = new node;
    two = new node;
    three = new node;

    one->vertex = 1;
    two->vertex = 2;
    three->vertex= 3;

    one->next = two;
    two->next = three;
    three->next = NULL;

    cout << one->data << endl;
    cout << one->next << endl;
    cout << two << endl; //shows that the pointer in the previous node and the location of current node is the same

    //insert at start
    node *zero = NULL;
    zero = new node;
    zero->data = 9;
    zero->next = one;

    cout << zero->data << endl << zero->next << endl << one << endl;

    //deleting node "one"
    zero->next = two;
    cout << zero->next << endl << two;
    return 0;
}