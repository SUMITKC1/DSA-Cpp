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

// Main function
int main() {
    // Creating a sample binary tree
    node* root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);


    return 0;
}
  