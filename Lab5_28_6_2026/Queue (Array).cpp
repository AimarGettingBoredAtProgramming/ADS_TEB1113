//STACK IMPLEMENTATION USING LINKED LIST
#include<iostream>

using namespace std;

struct Node{
    string name;
    Node* next = nullptr;
};

struct Queue{
    
    Node* front = nullptr;
    Node* rear = nullptr;

    void enqueue(string name){ //We set a parameter
        Node* newNode = new Node();
        newNode->name = name;
        newNode->next = nullptr;

        if (front == nullptr){ //This is if both front and rear are null, move both nodes to the front
            front = rear = newNode; 
            return;
        }

        rear->next =newNode; //This is if the front has a node already, we can move the rear to the next node
        rear = newNode; //Then we set the rear to the new node
    }

    void dequeue(){
        if (front == nullptr){ //If the front is null, we cannot dequeue anything. So this condition will check it...Like dattt
            cout << "Unable to dequeue, the queue is empty" << endl;
            return;
        }

        Node* temp = front; //bro WE NEED TO POINT BRO...like we need to know where th the node at the front is so we store it for deletion later...lol
        front = front->next; //once we dequeue, the front gotta move to next node bruh
        delete temp; //Haaa then here is where we can only delete that stored temporary node value
    }

    string peekFront(){ //This isnt any different, it's like peaking the top of a stack onlehh
        if(front != nullptr){
            return front->name;
        }
        return "Queue is empty";
    }
};

int main(){
    
    Queue queue;
    queue.enqueue("Ammir"); // First in line
    queue.enqueue("Alice");
    queue.enqueue("Aimar");
    queue.enqueue("Ahmed");
    queue.enqueue("Aisha"); // Last in line

    // Should output "Ammir" because he was the first one added
    cout << "Front of the queue: " << queue.peekFront() << endl;

    queue.dequeue(); // Removes Ammir
    
    // Should now output "Alice"
    cout << "Front of the queue after dequeue: " << queue.peekFront() << endl;

    return 0;
}