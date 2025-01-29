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
int diameter=0;
int height(TreeNode* root){
    if(root==NULL)return 0;
    int lh=height(root->left);
    int rh=height(root->right);
     diameter=max(diameter,lh+rh);
    return max(lh,rh)+1;
}

int diameterOfBT(TreeNode* root){
    height(root);
    return diameter;
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
    Solution sol;
    int dia=sol.diameterOfBT(root);
    cout<<"the diameter of the BT is:"<<dia<<endl;

    return 0;
}
  