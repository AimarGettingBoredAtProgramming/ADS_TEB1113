#include<iostream>

using namespace std;

struct Node {
    string name;
    Node* next;
};

int main() {

    Node* first = new Node(); //This instantiates a new memory address for the pointer to point to
    Node* second = new Node();
    Node* third = new Node();

    first->name = "Alice";
    second->name = "Aimar";
    third->name = "Ahmed";

   first->next = second;
   second->next = third;
   third->next = nullptr;

   for(int i = 0; i < 3; i++) { //This is a loop that should point to the next node until it reaches the end of the list
       cout << first->name << endl;
       first = first->next;
   }

    return 0;
}