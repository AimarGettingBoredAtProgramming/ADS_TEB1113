#include<iostream>

using namespace std;

struct Node {
    string name;
    Node* next = NULL; 
};

int main() {

    Node* first = new Node(); 
    Node* second = new Node();
    Node* third = new Node();

    first->name = "Alice";
    second->name = "Aimar";
    third->name = "Ahmed";

    // Link them forward
    first->next = second;
    second->next = third;

    third->next = first; // Connect the tail back to the head

    // Print forward using a temp pointer so we don't lose
    Node* temp = first;
    for(int i = 0; i < 6; i++) { // this shows the loop loops twice around the circle of the "array"
        cout << temp->name << endl;
        temp = temp->next;
    }
};