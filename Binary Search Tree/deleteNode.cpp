#include <bits/stdc++.h>

using namespace std;

// Tnde struct represents
// a node in a binary tree
struct node {
    int val; 
    node* left; 
    node* right;

    // Default constructor for node
    node() : val(0), left(nullptr), right(nullptr) {}

    // Constructor with a value
    // parameter for node
    node(int x) : val(x), left(nullptr), right(nullptr) {}

    // Constructor with value, left
    // child, and right child
    // parameters for node
    node(int x, node* left, node* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    node* del(node* root,int val){
        if(root==NULL)return NULL;
        node* temp=root;
        if(temp->val<val){
            temp=temp->right;
        }
        else if(temp->val>val){
            temp=temp->left;
        }
        //temp->val==val
        else{
            if(temp->val<root->val){
                while(root){
                    root=root->left;
                }
                root->left=temp->left;
                while(temp->left->right){
                    temp->left->right=temp->left->right->right;
                }
                temp->left->right=temp->right;
            }
            return root;

        }

    }
};


// Function to print
// the elements of a vector
void printVector(const vector<int>& vec) {
    // Iterate through the
    // vector and print each element
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

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
    node* res = sol.del(root, 2);

    // Printing the tree after insertion
    cout << "In-order traversal of the tree: ";
    inOrderTraversal(res);
    cout << endl;

    return 0;
}
  