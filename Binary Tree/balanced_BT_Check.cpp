#include <bits/stdc++.h>

using namespace std;

// TreeNode struct represents
// a node in a binary tree
struct TreeNode {
    int val; 
    TreeNode* left; 
    TreeNode* right;

    // Default constructor for TreeNode
    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    // Constructor with a value
    // parameter for TreeNode
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    // Constructor with value, left
    // child, and right child
    // parameters for TreeNode
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
int height(TreeNode* root){
    if(root==NULL)return 0;
    int lh=height(root->left);
    int rh=height(root->right);
    //just two lines of codes to check if BT is balanced or not 
    if(lh==-1 || rh==-1){return -1;}
    if(abs(lh-rh)>1){return -1;}
    // if balanced and height is there 
    return 1+max(lh,rh);
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

// Main function
int main() {
    // Creating a sample binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->left->right->right = new TreeNode(6);
    root->left->right->right->right = new TreeNode(7);
    Solution sol;
    int depth=sol.height(root);
    if(depth==-1){
        cout<<" the BT is unbalanced "<<endl;
    }
    else{
    cout<<"the BT is balanced and its height is : "<<depth<<endl;
    }
    return 0;
}
  