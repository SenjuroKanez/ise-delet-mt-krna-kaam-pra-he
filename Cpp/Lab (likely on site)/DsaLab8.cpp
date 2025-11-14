#include <iostream>
#include <cstring>
using namespace std;
const int N = 5;
int stack[N];
int top = -1;

#include <iostream>
using namespace std;
int m();
int ain();

class Node {
public:
    int data;
    Node* next;
    
    Node(int value) {
        data = value;
        next = nullptr;
    }
};


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
    

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return -1;
        }
        return top->data;
    }
    

    bool isEmpty() {
        return top == nullptr;
    }
    

    int getSize() {
        return size;
    }
    

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
    
    m();
    ain();
    return 0;

}

#define MAX_SIZE 100

// --- Stack Implementation using an Array ---

// Global stack array and 'top' pointer
int stackArrayDecimal[MAX_SIZE];
int topIndexArray = -1; // -1 indicates the stack is empty

bool isFullArray() {
    return topIndexArray == MAX_SIZE - 1;
}


bool isEmptyArray() {
    return topIndexArray == -1;
}


void pushArray(int item) {
    if (isFullArray()) {
        std::cout << "Stack Overflow! Cannot push item." << std::endl;
        return;
    }
    // Increment top, then add the item to that position
    stackArrayDecimal[++topIndexArray] = item;
}


int popArray() {
    if (isEmptyArray()) {
        std::cout << "Stack Underflow! Cannot pop item." << std::endl;
        return -1; // Return a sentinel value indicating error
    }
    // Return the item at the top, then decrement top
    return stackArrayDecimal[topIndexArray--];
}


void convertDecimalToBinary(int decimalNum) {
    if (decimalNum == 0) {
        std::cout << "Binary equivalent: 0" << std::endl;
        return;
    }
    
    // Keep a copy of the original number for printing
    int originalNum = decimalNum;

    // 1. Push remainders onto the stack
    while (decimalNum > 0) {
        // Find the remainder when divided by 2 (0 or 1)
        int remainder = decimalNum % 2;
        
        // Push the remainder onto the stack
        pushArray(remainder);
        
        // Update the decimal number by dividing by 2
        decimalNum = decimalNum / 2;
    }

    // 2. Pop remainders from the stack to get the binary number
    std::cout << "Decimal number: " << originalNum << std::endl;
    std::cout << "Binary equivalent: ";
    while (!isEmptyArray()) {
        // Pop the top item (which was the last remainder pushed)
        // and print it.
        std::cout << popArray();
    }
    std::cout << std::endl;
}

// --- Main Program ---

int m() {
    int number;
    
    std::cout << "--- Decimal to Binary Converter ---" << std::endl;
    std::cout << "Enter a positive decimal number: ";
    std::cin >> number;

    if (number < 0) {
        std::cout << "This program only supports positive numbers." << std::endl;
    } else {
        convertDecimalToBinary(number);
    }

    return 0;
}






// Custom stack implementation using array for palindrome check
const int CHAR_STACK_SIZE = 100;
char charStack[CHAR_STACK_SIZE];
int charTopIndex = -1;

// Function to check if char stack is empty
bool isCharStackEmpty() {
    return charTopIndex == -1;
}

// Function to check if char stack is full
bool isCharStackFullPalindrome() {
    return charTopIndex == CHAR_STACK_SIZE - 1;
}

// Push function
void pushChar(char c) {
    if (isCharStackFullPalindrome()) {
        cout << "Stack overflow!" << endl;
        return;
    }
    charStack[++charTopIndex] = c;
}

// Pop function
char popChar() {
    if (isCharStackEmpty()) {
        cout << "Stack underflow!" << endl;
        return '\0';  // Return null character on underflow
    }
    return charStack[charTopIndex--];
}

// Peek function (get top element without popping)
char peekChar() {
    if (isCharStackEmpty()) {
        cout << "Stack is empty!" << endl;
        return '\0';
    }
    return charStack[charTopIndex];
}

int ain() {
    char str[100];  // Assuming maximum string length of 99 characters plus null terminator

    cout << "Enter a string: ";
    cin >> str;  // Reads input string (assuming no spaces for simplicity)

    int len = strlen(str);

    // Push each character onto the stack
    for (int i = 0; i < len; i++) {
        pushChar(str[i]);
    }

    // Check if it's a palindrome by comparing original string with popped characters
    bool isPalindrome = true;
    for (int i = 0; i < len; i++) {
        if (str[i] != peekChar()) {
            isPalindrome = false;
            break;
        }
        popChar();
    }

    if (isPalindrome) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}