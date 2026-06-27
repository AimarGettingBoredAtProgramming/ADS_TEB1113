//STACK IMPLEMENTATION USING LINKED LIST
#include<iostream>

using namespace std;

const int MAX_SIZE = 5; //Much like a stack array, we initialize the max size. Only issue is that arrays run out of space when it gets cleared from the front

struct Queue{
    string arr[MAX_SIZE];
    int front = 0;
    int rear = -1;
    int count = 0;

    void enqueue(string name){ //We set a parameter
        if (count >= MAX_SIZE){
            cout << "Queue will overflow, it is currently full" << endl;
            return;
        }

        rear = (rear + 1) % MAX_SIZE; //We have to loop the rear counter back around to the front index. We can achieve this by doing a modulo operation with the max size of the array. This will ensure that the rear counter will loop back to the front index when it reaches the end of the array.
        arr[rear] = name;
        count++;
    }

    void dequeue(){
        if (count <= 0){
            cout << "Queue will underflow, it is currently empty" << endl;
            return;
        }

        front = (front + 1) % MAX_SIZE; //Like stack, we dont need to delete the data, we just need increment the front counter
        count--; //When data is filled, of course the count is gonna decrease
    }

    string peekFront(){ //This isnt any different, it's like peaking the top of a stack onlehh
        if (count > 0){
            return arr[front];
        }
        return "Queue is empty";
    }
};

int main(){
    Queue queue;

    queue.enqueue("Ammir");
    queue.enqueue("Alice");
    queue.enqueue("Aimar");

    cout << "Front of the queue: " << queue.peekFront() << endl;

    queue.dequeue(); 
    cout << "Front after 1 dequeue: " << queue.peekFront() << endl; 

    queue.enqueue("Ahmed");
    queue.enqueue("Aisha");
    queue.enqueue("Aziz"); // This wraps around to index 0 because Ammir was removed

    return 0;
}