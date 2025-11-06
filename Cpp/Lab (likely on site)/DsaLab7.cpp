#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

void CreateDoublyLinkedList(Node** head, int n) {
    Node* temp;
    Node* p;
    *head = new Node();
    (*head)->data = 1;
    (*head)->next = nullptr;
    (*head)->prev = nullptr;
    p = *head;

    for (int i = 2; i <= n; i++) {
        temp = new Node();
        temp->data = i;
        temp->next = nullptr;
        temp->prev = p;
        p->next = temp;
        p = p->next;
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

int main(){
    Node* head = nullptr;
    int n = 5;
    
    CreateDoublyLinkedList(&head, n);
    cout << "Doubly Linked List after creation: ";
    DisplayDoublyLinkedList(head);

    InsertAtPosition(&head, 3, 10);
    cout << "Doubly Linked List after inserting 10 at position 3: ";
    DisplayDoublyLinkedList(head);

    DeleteNodeAtPosition(&head, 2);
    cout << "Doubly Linked List after deleting node at position 2: ";
    DisplayDoublyLinkedList(head);

    return 0;
}