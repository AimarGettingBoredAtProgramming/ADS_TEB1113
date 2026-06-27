//STACK IMPLEMENTATION USING LINKED LIST
#include<iostream>

using namespace std;

struct Node{
    string name;
    Node* next = nullptr;
};

struct Stack{
    
    Node* top = nullptr;

    void push(string name){ //We set a parameter
        Node* newNode = new Node();
        newNode->name = name; //use the parameter because this time we wanna set the name as any nam. Because before this you would have to create new node manually. By having a function, we can instantiate new nodes easily
        newNode->next = top; //It's like a factory for creating new nodes
        top = newNode;
    }

    void pop(){
        if(top != nullptr){ //So in this part, we first need too check whether the stack is empty or not. If it is not empty, we can pop the top element. If it is empty, we cannot pop anything.
            Node* temp = top;
            top = top->next;
            delete temp;
        }
    }

    string peek(){
        if(top != nullptr){
            return top->name;
        }
        return "";
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