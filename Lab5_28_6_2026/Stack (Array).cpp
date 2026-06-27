//STACK IMPLEMENTATION USING ARRAY
#include<iostream>
#include<string>

using namespace std;

const int MAX_SIZE = 100; // Maximum size of the stack

struct Stack{

    string arr[MAX_SIZE]; //This sets the array size of the stack to 100

    int top = -1;

    void push(string name){ //We set a parameter
        if (top >= MAX_SIZE - 1){
            cout << "Unable to push " << name << ", stack is full" << endl; //To ensure stack cannot be filled
            return;
        }

        top++; //to increment so we can add into the first index of the array
        arr[top] = name;
    }

    void pop(){
        if (top == -1){
            cout << "Unable to pop, the stack is empty" << endl;
            return;
        }

        top--; //The logic is that in an array, we dont need to remove the data, we just need to reduce the top counter. When smtg new fills it up, it will take the spot of the previous "top" value
    }

    string peek(){
        if (top != -1){
            return arr[top];
        }
        return "Stack is empty";
    }
};

int main(){
    
    Stack stack;
    stack.push("Ammir");
    stack.push("Alice");
    stack.push("Aimar");
    stack.push("Ahmed");
    stack.push("Aisha");

    cout << "Top of the stack: " << stack.peek() << endl;

    stack.pop();
    cout << "Top of the stack after pop: " << stack.peek() << endl;

    return 0;
}