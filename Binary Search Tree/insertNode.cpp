#include <bits/stdc++.h>

using namespace std;

// Node struct represents a node in a binary tree
struct node {
    int val; 
    node* left; 
    node* right;

    // Default constructor for node
    node() : val(0), left(nullptr), right(nullptr) {}

    // Constructor with a value parameter for node
    node(int x) : val(x), left(nullptr), right(nullptr) {}

    // Constructor with value, left child, and right child parameters for node
    node(int x, node* left, node* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    node* insertNode(node* root, int val) {
        if (root == nullptr) return new node(val);
        node* tempRoot = root;
        while (true) {
            if (tempRoot->val <= val) {
                if (tempRoot->right == nullptr) {
                    tempRoot->right = new node(val);
                    break;
                } else {
                    tempRoot = tempRoot->right;
                }
            } else {
                if (tempRoot->left == nullptr) {
                    tempRoot->left = new node(val);
                    break;
                } else {
                    tempRoot = tempRoot->left;
                }
            }
        }
        return root;
    }
};

// Function to perform in-order traversal and print the tree
void inOrderTraversal(node* root) {
    if (root == nullptr) return;
    inOrderTraversal(root->left);
    cout << root->val << " ";
    inOrderTraversal(root->right);
}

// Main function
int main() {
    // Creating a sample binary tree
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);

    Solution sol;
    node* res = sol.insertNode(root, 6);

    // Printing the tree after insertion
    cout << "In-order traversal of the tree: ";
    inOrderTraversal(res);
    cout << endl;

    return 0;
}
