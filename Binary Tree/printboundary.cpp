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
    
     bool isleaf(TreeNode* root) {
        return !root->left && !root->right;
    }
    void left(TreeNode* root,vector<int> &result){
        TreeNode* l=root->left;//l is left's l
        while(l){
            if(!isleaf(l))result.push_back(l->val);
            if(l->left){
                l=l->left;
            }
            else{l=l->right;}
            
        }}
    void leaf(TreeNode* root,vector<int> &result){
        if(isleaf(root)){
            result.push_back(root->val);
            return ;
        }
        if(root->left)leaf(root->left,result);
        if(root->right)leaf(root->right,result);
        }
    void right(TreeNode* root,vector<int> &result){
        TreeNode* r=root->right;
        vector<int> temp;
        while(r){
            if(!isleaf(r))temp.push_back(r->val);
            if(r->right)r=r->right;
            else{r=r->left;}

        }
        for(int i=temp.size()-1;i>=0;i--){
            result.push_back(temp[i]);
        }
    }        

    
public:
    vector<int> printBoundary(TreeNode* root){
        vector<int> result;
        if(root==NULL)return result;
        if(!isleaf(root)){result.push_back(root->val);}
        left(root,result);
        leaf(root,result);
        right(root,result);
        return result;
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
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);
    Solution solution;

    // Get the boundary traversal
    vector<int> result = solution.printBoundary(root);

    // Print the result
    cout << "Boundary Traversal: ";
    printVector(result);


    return 0;
}
  