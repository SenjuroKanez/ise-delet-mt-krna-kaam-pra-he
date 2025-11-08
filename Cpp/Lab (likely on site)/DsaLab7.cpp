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
        cout << "Insert node 1 with data: ";
        cin >> temp->data;
        temp->prev = nullptr;
        temp->next = nullptr;
        *head = temp;
        tail = temp;
    }

    for (int i = (*head ? 2 : 1); i <= n; ++i) {
        Node* temp = new Node();
        cout << "Insert node " << i << " with data: ";
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

void douballlinkmen() {
    cout << "\nDoubly Linked List Operations Menu:\n";
    cout << "1. Create Doubly Linked List\n";
    cout << "2. Display Doubly Linked List\n";
    cout << "3. Insert Node at Position\n";
    cout << "4. Delete Node at Position\n";
    cout << "5. Insert at start\n";
    cout << "6. Insert at end\n";
    cout << "7. Delete at start\n";
    cout << "8. Delete at end\n";
    cout << "9. Search first occurrence\n";
    cout << "10. Reverse List\n";
    cout << "11. Exit\n";
}

int main() {
    Node* head = nullptr;
    int choice;
    bool x = true;

    while (x) {
        douballlinkmen();
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                cout << "Enter size of list: ";
                int n;
                cin >> n;
                CreateDoublyLinkedList(&head, n);
                break;
            }
            case 2: {
                cout << "Doubly Linked List: ";
                DisplayDoublyLinkedList(head);
                break;
            }
            case 3: {
                cout << "Enter position: ";
                int pos, val;
                cin >> pos;
                cout << "Enter value: ";
                cin >> val;
                InsertAtPosition(&head, pos, val);
                break;
            }
            case 4: {
                cout << "Enter position to delete: ";
                int pos;
                cin >> pos;
                DeleteNodeAtPosition(&head, pos);
                break;
            }
            case 5: {
                cout << "Enter value to insert at start: ";
                int val;
                cin >> val;
                InsertAtPosition(&head, 1, val);
                break;
            }
            case 6: {
                cout << "Enter value to insert at end: ";
                int val;
                cin >> val;
                InsertAtend(&head, val);
                break;
            }
            case 7: {
                DeleteNodeAtPosition(&head, 1);
                cout << "Deleted node at start.\n";
                break;
            }
            case 8: {
                DeleteNodeAtEnd(&head);
                cout << "Deleted node at end.\n";
                break;
            }
            case 9: {
                cout << "Enter value to search: ";
                int key;
                cin >> key;
                Searchfirstoccurrence(head, key);
                break;
            }
            case 10: {
                cout << "Original List: ";
                DisplayDoublyLinkedList(head);
                reverseList(head);
                cout << "Reversed List: ";
                DisplayDoublyLinkedList(head);
                break;
            }
            case 11: {
                x = false;
                cout << "Exiting program...\n";
                break;
            }
            default:
                cout << "Invalid choice, try again.\n";
        }
    }

    return 0;
}
