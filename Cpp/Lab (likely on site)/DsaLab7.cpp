#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void CreateDoublyLinkedList(Node** head, int n) {
    if (n <= 0) return;
    Node* tail = *head; 

    if (tail == nullptr) {
        Node* temp = new Node();
        cout << "Insert node 1 with data: " << endl;
        cin >> temp->data;
        temp->prev = nullptr;
        temp->next = nullptr;
        *head = temp;
        tail = temp;
    }

    for (int i = (*head ? 2 : 1); i <= n; ++i) {
        Node* temp = new Node();
        cout << "Insert node " << i << " with data: " << endl;
        cin >> temp->data;
        temp->next = nullptr;
        temp->prev = tail;
        if (tail) tail->next = temp;
        tail = temp;
    }
}

void DisplayDoublyLinkedList(Node* head) {
    Node* p = head;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void DeleteNodeAtEnd(Node** head) {
    if (*head == nullptr) return;

    Node* temp = *head;

    while (temp->next != nullptr) {
        temp = temp->next;
    }

    if (temp->prev != nullptr) {
        temp->prev->next = nullptr;
    } else {
        *head = nullptr;
    }

    delete temp;
}

void DeleteNodeAtPosition(Node** head, int position) {
    if (*head == nullptr || position < 1) return;

    Node* temp = *head;

    if (position == 1) {
        *head = temp->next;
        if (*head != nullptr) {
            (*head)->prev = nullptr;
        }
        delete temp;
        return;
    }

    for (int i = 1; temp != nullptr && i < position; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) return;

    if (temp->next != nullptr) {
        temp->next->prev = temp->prev;
    }
    if (temp->prev != nullptr) {
        temp->prev->next = temp->next;
    }

    delete temp;
}

void InsertAtend(Node** head, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = nullptr;

    if (*head == nullptr) {
        new_node->prev = nullptr;
        *head = new_node;
        return;
    }

    Node* temp = *head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }

    temp->next = new_node;
    new_node->prev = temp;
}

void InsertAtPosition(Node** head, int position, int new_data) {
    if (position < 1) return;

    Node* new_node = new Node();
    new_node->data = new_data;

    if (position == 1) {
        new_node->next = *head;
        new_node->prev = nullptr;
        if (*head != nullptr) {
            (*head)->prev = new_node;
        }
        *head = new_node;
        return;
    }

    Node* temp = *head;
    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        delete new_node;
        return;
    }

    new_node->next = temp->next;
    new_node->prev = temp;

    if (temp->next != nullptr) {
        temp->next->prev = new_node;
    }
    temp->next = new_node;
}

int Searchfirstoccurrence(Node* head, int key) {
    Node* temp = head;
    int position = 1;
    while (temp != nullptr) {
        if (temp->data == key) {
            cout << "Element found at position: " << position << endl;
            return position;
        }
        temp = temp->next;
        position++;
    }
    cout << "Element not found" << endl;
    return -1;
}

void reverseList(Node*& head) {
    if (!head || !head->next) return;

    Node* current = head;
    Node* temp = nullptr;

    while (current != nullptr) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }

    if (temp != nullptr) {
        head = temp->prev;
    }
}

int main() {
    Node* head = nullptr;
    int choice;

    cout << "Doubly Linked List Operations Menu:" << endl;
    cout << "1. Create Doubly Linked List" << endl;
    cout << "2. Display Doubly Linked List" << endl;
    cout << "3. Insert Node at Position" << endl;
    cout << "4. Delete Node at Position" << endl;
    cout << "5. Insert at end" << endl;
    cout << "6. Delete at end" << endl;
    cout << "7. Search first occurrence" << endl;
    cout << "8. Reverse List" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            cout << "To Create Doubly Linked List input its size: ";
            int n;
            cin >> n;
            CreateDoublyLinkedList(&head, n);
            break;
        }
        case 2: {
            cout << "Display Doubly Linked List:" << endl;
            DisplayDoublyLinkedList(head);
            break;
        }
        case 3: {
            cout << "To Insert Node at Position \nEnter Position: ";
            int n;
            cin >> n;
            cout << "Enter Value: ";
            int val;
            cin >> val;
            InsertAtPosition(&head, n, val);
            break;
        }
        case 4: {
            cout << "To Delete Node at Position \nEnter Position: ";
            int n;
            cin >> n;
            DeleteNodeAtPosition(&head, n);
            break;
        }
        case 5: {
            cout << "Insert at end\nEnter Value: ";
            int val;
            cin >> val;
            InsertAtend(&head, val);
            break;
        }
        case 6: {
            cout << "Delete at end" << endl;
            DeleteNodeAtEnd(&head);
            break;
        }
        case 7: {
            cout << "Search first occurrence \nEnter Value: ";
            int key;
            cin >> key;
            int pos = Searchfirstoccurrence(head, key);
            if (pos == -1)
                cout << "found: false" << endl;
            else
                cout << "found: true at index " << pos << endl;
            break;
        }
        case 8: {
            cout << "Original List: ";
            DisplayDoublyLinkedList(head);
            reverseList(head);
            cout << "Reversed List: ";
            DisplayDoublyLinkedList(head);
            break;
        }
        default:
            cout << "Invalid Choice" << endl;
    }

    return 0;
}
