<<<<<<< HEAD
#include <iostream>
using namespace std;
const int N = 5;
int stack[N];
int top = -1;

#include <iostream>
using namespace std;

// Node structure for linked list
class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// Stack class using linked list
class Stack {
private:
    Node* top;
    int size;
    
public:
    // Constructor
    Stack() {
        top = nullptr;
        size = 0;
    }
    
    // Destructor to free memory
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
    
    // Push operation - O(1)
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
        size++;
        cout << value << " pushed to stack\n";
    }
    
    // Pop operation - O(1)
    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow! Stack is empty.\n";
            return -1;
        }
        Node* temp = top;
        int poppedValue = top->data;
        top = top->next;
        delete temp;
        size--;
        return poppedValue;
    }
    
    // Peek operation - O(1)
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
        return top->data;
    }
    
    // Check if stack is empty
    bool isEmpty() {
        return top == nullptr;
    }
    
    // Get size of stack
    int getSize() {
        return size;
    }
    
    // Display stack contents
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        Node* temp = top;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};


void push() {
    int a;
    cout << "Enter the data: ";
    cin >> a;
    if (top == N - 1) {
        cout << "!!!!!!!!!!! The Stack is Full !!!!!!!!!!!\n";
    } else {
    top++;
    stack[top] = a;
    }
}
void pop() {
    if (top == -1) {
    cout << "!!!!!!!!!!!!!!! The Stack is Empty !!!!!!!!!!!\n";
    } else {
        int item = stack[top];
        top--;
        cout << "\nDeleted Item is: " << item << "\n";
    }
}
void peek() {
    if (top == -1) {
        cout << "!!!!!!!!!!!!!! Stack is Empty !!!!!!!!\n";
    } else {
        cout << stack[top] << "\n";
    }
}
void display() {
    if (top == -1) {
        cout << "Stack is Empty\n";
    return;
    }
    for (int i = top; i >= 0; i--) {
        cout << "\t" << stack[i] << "\n";
    }
}
int main() {
push();
push();
push();
display();
pop();
cout << "After deleting an element" << endl;
display();
push();
push();
push(); // This will show "stack full" after limit
display();



    Stack s;
    
    cout << "=== Stack Operations Demo ===\n\n";
    
    // Push operations
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    
    cout << "\n";
    s.display();
    
    // Peek operation
    cout << "\nTop element: " << s.peek() << endl;
    
    // Size operation
    cout << "Stack size: " << s.getSize() << endl;
    
    // Pop operations
    cout << "\nPopping elements:\n";
    cout << s.pop() << " popped from stack\n";
    cout << s.pop() << " popped from stack\n";
    
    cout << "\n";
    s.display();
    
    cout << "\nStack size after popping: " << s.getSize() << endl;
    
    // Try to peek and pop from remaining elements
    cout << "\nTop element: " << s.peek() << endl;
    
    s.push(50);
    s.display();
    
    // Empty the stack
    cout << "\nEmptying the stack:\n";
    while (!s.isEmpty()) {
        cout << s.pop() << " popped\n";
    }
    
    cout << "\n";
    s.display();
    
    // Try pop on empty stack
    cout << "\nTrying to pop from empty stack:\n";
    s.pop();
    
    return 0;
return 0;
=======
#include <iostream>
using namespace std;
const int N = 5;
int stack[N];
int top = -1;
void push() {
    int a;
    cout << "Enter the data: ";
    cin >> a;
    if (top == N - 1) {
        cout << "!!!!!!!!!!! The Stack is Full !!!!!!!!!!!\n";
    } else {
    top++;
    stack[top] = a;
    }
}
void pop() {
    if (top == -1) {
    cout << "!!!!!!!!!!!!!!! The Stack is Empty !!!!!!!!!!!\n";
    } else {
        int item = stack[top];
        top--;
        cout << "\nDeleted Item is: " << item << "\n";
    }
}
void peek() {
    if (top == -1) {
        cout << "!!!!!!!!!!!!!! Stack is Empty !!!!!!!!\n";
    } else {
        cout << stack[top] << "\n";
    }
}
void display() {
    if (top == -1) {
        cout << "Stack is Empty\n";
    return;
    }
    for (int i = top; i >= 0; i--) {
        cout << "\t" << stack[i] << "\n";
    }
}
int main() {
push();
push();
push();
display();
pop();
cout << "After deleting an element" << endl;
display();
push();
push();
push(); // This will show "stack full" after limit
display();
return 0;
>>>>>>> 0ff6b5e0215b67bafe222a91289bfbfe20aa4117
}