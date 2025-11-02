#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void create_linked_list(node** head, int n) {
    node* temp;
    node* p;
    *head = new node();
    (*head)->data = 1;
    (*head)->next = nullptr;
    p = *head;

    for (int i = 2; i <= n; i++) {
        temp = new node();
        temp->data = i;
        temp->next = nullptr;
        p->next = temp;
        p = p->next;
    }
}
void display_linked_list(node* head) {
    node* p = head;
    while (p != nullptr) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}
void delete_linked_list(node** head) {
    node* current = *head;
    node* next;

    while (current != nullptr) {
        next = current->next;
        delete current;
        current = next;
    }
    *head = nullptr;
}
void delete_node_at_position(node** head, int position) {
    if (*head == nullptr || position < 1) return;

    node* temp = *head;

    if (position == 1) {
        *head = temp->next;
        delete temp;
        return;
    }

    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr || temp->next == nullptr) return;

    node* next = temp->next->next;
    delete temp->next;
    temp->next = next;
}

void delete_at_end(node** head) {
    if (*head == nullptr) return;

    if ((*head)->next == nullptr) {
        delete *head;
        *head = nullptr;
        return;
    }

    node* second_last = *head;
    while (second_last->next->next != nullptr) {
        second_last = second_last->next;
    }

    delete second_last->next;
    second_last->next = nullptr;
}
void delete_at_beginning(node** head) {
    if (*head == nullptr) return;

    node* temp = *head;
    *head = (*head)->next;
    delete temp;
}
void insert_at_end(node** head, int new_data) {
    node* new_node = new node();
    node* last = *head;
    new_node->data = new_data;
    new_node->next = nullptr;

    if (*head == nullptr) {
        *head = new_node;
        return;
    }

    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = new_node;
}
void insert_at_beginning(node** head, int new_data) {
    node* new_node = new node();
    new_node->data = new_data;
    new_node->next = *head;
    *head = new_node;
}
void insert_at_position(node** head, int position, int new_data) {
    if (position < 1) return;

    if (position == 1) {
        insert_at_beginning(head, new_data);
        return;
    }

    node* new_node = new node();
    new_node->data = new_data;

    node* temp = *head;
    for (int i = 1; temp != nullptr && i < position - 1; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        delete new_node;
        return;
    }

    new_node->next = temp->next;
    temp->next = new_node;
}
int main() {
    node* head = nullptr;
    create_linked_list(&head, 5);
    cout << "Initial linked list: ";
    display_linked_list(head);

    insert_at_end(&head, 6);
    cout << "After inserting 6 at end: ";
    display_linked_list(head);

    insert_at_beginning(&head, 0);
    cout << "After inserting 0 at beginning: ";
    display_linked_list(head);

    insert_at_position(&head, 4, 99);
    cout << "After inserting 99 at position 4: ";
    display_linked_list(head);

    delete_node_at_position(&head, 3);
    cout << "After deleting node at position 3: ";
    display_linked_list(head);

    delete_at_end(&head);
    cout << "After deleting node at end: ";
    display_linked_list(head);

    delete_at_beginning(&head);
    cout << "After deleting node at beginning: ";
    display_linked_list(head);

    delete_linked_list(&head);
    cout << "After deleting entire linked list: ";
    display_linked_list(head);

    return 0;
}