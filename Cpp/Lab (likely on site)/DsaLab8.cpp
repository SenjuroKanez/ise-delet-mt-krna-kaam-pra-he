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
}