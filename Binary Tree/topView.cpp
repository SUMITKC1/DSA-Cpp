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
    vector<int> topView(TreeNode* root){
        vector<int> ans;
        if(root==NULL)return ans;
        queue<pair<TreeNode* ,int>> q;
        map<int,int> mpp;
        q.push({root,0});
        
        while(!q.empty()){
            auto it=q.front();
        q.pop();
        TreeNode* node=it.first;
        int line=it.second;
        if(mpp.find(line)==mpp.end())mpp[line]=node->val;//here we know that line is not already there in the map
        if(node->left!=NULL){
            q.push({node->left,line-1});
        }
        if(node->right!=NULL){
            q.push({node->right,line+1});
        }
        }
        for(auto it:mpp){
            ans.push_back(it.second);
        }
        return ans;
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
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(10);
    root->left->left->right = new TreeNode(5);
    root->left->left->right->right = new TreeNode(6);
    root->right = new TreeNode(3);
    root->right->right = new TreeNode(10);
    root->right->left = new TreeNode(9);
    Solution sol;
    vector<int> res=sol.topView(root);//here the res vector is made with all the values 
      // Print the result
    cout << "Top View Traversal: "<< endl;
    //iteration over res vector and printing the values  
    for(auto n: res){
        cout << n << " ";
    }

    return 0;
}
  