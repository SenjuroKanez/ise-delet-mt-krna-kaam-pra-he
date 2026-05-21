/*1. Write a C++ program to create a Binary Search Tree. Your tree must be able to perform the
following using functions
● Insertion
● Search
● Deletion
*/
#include <iostream>
using namespace std;

// Definition of Node for Binary Search Tree
struct BstNode {
    int data;
    BstNode* left;
    BstNode* right;
};

// Function to create a new Node
BstNode* GetNewNode(int data) {
    BstNode* newNode = new BstNode();
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// To insert data in BST, returns address of root node
BstNode* Insert(BstNode* root, int data) {
    if(root == NULL) { // empty tree
        root = GetNewNode(data);
    }
    // if data to be inserted is lesser, insert in left subtree
    else if(data <= root->data) {
        root->left = Insert(root->left, data);
    }
    // else, insert in right subtree
    else {
        root->right = Insert(root->right, data);
    }
    return root;
}

// To search an element in BST, returns true if element is found
bool Search(BstNode* root, int data) {
    if(root == NULL) {
        return false;
    }
    else if(root->data == data) {
        return true;
    }
    else if(data <= root->data) {
        return Search(root->left, data);
    }
    else {
        return Search(root->right, data);
    }
}

// Find minimum value node in a tree (leftmost node)
BstNode* FindMin(BstNode* root) {
    if(root == NULL) return NULL;
    while(root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Delete a node from BST
BstNode* Delete(BstNode* root, int data) {
    if(root == NULL) return root;
    
    // Search for the node to delete
    if(data < root->data) {
        root->left = Delete(root->left, data);
    }
    else if(data > root->data) {
        root->right = Delete(root->right, data);
    }
    // Found the node to delete
    else {
        // Case 1: No child (leaf node)
        if(root->left == NULL && root->right == NULL) {
            delete root;
            root = NULL;
        }
        // Case 2: One child (right child only)
        else if(root->left == NULL) {
            BstNode* temp = root;
            root = root->right;
            delete temp;
        }
        // Case 2: One child (left child only)
        else if(root->right == NULL) {
            BstNode* temp = root;
            root = root->left;
            delete temp;
        }
        // Case 3: Two children
        else {
            BstNode* temp = FindMin(root->right);
            root->data = temp->data;
            root->right = Delete(root->right, temp->data);
        }
    }
    return root;
}

// Helper function to print tree in-order (for testing)
void InOrder(BstNode* root) {
    if(root == NULL) return;
    InOrder(root->left);
    cout << root->data << " ";
    InOrder(root->right);
}

int main() {
    BstNode* root = NULL; // Creating an empty tree
    int choice, value;
    
    do {
        cout << "\n=== Binary Search Tree Operations ===\n";
        cout << "1. Insert\n";
        cout << "2. Search\n";
        cout << "3. Delete\n";
        cout << "4. Display (In-order)\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                cout << "Enter value to insert: ";
                cin >> value;
                root = Insert(root, value);
                cout << "Value inserted successfully!\n";
                break;
                
            case 2:
                cout << "Enter value to search: ";
                cin >> value;
                if(Search(root, value)) {
                    cout << "Found!\n";
                }
                else {
                    cout << "Not Found!\n";
                }
                break;
                
            case 3:
                cout << "Enter value to delete: ";
                cin >> value;
                if(Search(root, value)) {
                    root = Delete(root, value);
                    cout << "Value deleted successfully!\n";
                }
                else {
                    cout << "Value not found in tree!\n";
                }
                break;
                
            case 4:
                cout << "In-order traversal: ";
                if(root == NULL) {
                    cout << "Tree is empty!";
                }
                else {
                    InOrder(root);
                }
                cout << "\n";
                break;
                
            case 5:
                cout << "Exiting program...\n";
                break;
                
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while(choice != 5);
    
    return 0;
}