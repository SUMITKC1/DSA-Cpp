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
    vector<int> downView(node* root){
        vector<int> ans;
        if(root==NULL)return ans;
        queue<pair<node*,int>> q;
        map<int,int> mpp;
        q.push({root,0});
        while(!q.empty()){
            auto it=q.front();
            q.pop();
            node* node=it.first;
            int line = it.second;
            mpp[line]=node->val;
            if(node->left){
                q.push({node->left,line-1});
            }
            if(node->right){
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
    node* root = new node(1);
    root->left = new node(2);
    root->left->left = new node(4);
    root->left->right = new node(10);
    root->left->left->right = new node(5);
    root->left->left->right->right = new node(6);
    root->right = new node(3);
    root->right->right = new node(10);
    root->right->left = new node(9);
    Solution sol;
    vector<int> res=sol.downView(root);
    cout<<"the final downView if the tree is : "<<endl;
    for(auto output:res){
        cout<<output<<" ";
    }

    return 0;
}
  