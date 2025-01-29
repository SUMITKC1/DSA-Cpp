#include <bits/stdc++.h>

using namespace std;

// TreeNode struct represents a node in a binary tree
struct TreeNode {
    int val; 
    TreeNode* left; 
    TreeNode* right;

    // Default constructor for TreeNode
    TreeNode() : val(0), left(nullptr), right(nullptr) {}

    // Constructor with a value parameter for TreeNode
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    // Constructor with value, left child, and right child parameters for TreeNode
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    vector<vector<int>> preInPostTraversal(TreeNode* root) {
        vector<vector<int>> ans(3);
        if (root == nullptr) return ans;
        vector<int>& pre = ans[0];
        vector<int>& in = ans[1];
        vector<int>& post = ans[2];

        stack<pair<TreeNode*, int>> st;
        st.push({root, 1});
        while (!st.empty()) {
            auto it = st.top();
            st.pop();

            if (it.second == 1) {
                pre.push_back(it.first->val);
                it.second++;
                st.push(it);
                if (it.first->left != nullptr) {
                    st.push({it.first->left, 1});
                }
            } else if (it.second == 2) {
                in.push_back(it.first->val);
                it.second++;
                st.push(it);
                if (it.first->right != nullptr) {
                    st.push({it.first->right, 1});
                }
            } else {
                post.push_back(it.first->val);
            }
        }
        return ans;
    }
};

// Function to print the elements of a vector
void printVector(const vector<int>& vec) {
    // Iterate through the vector and print each element
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

    // Creating an instance of Solution
    Solution sol;

    // Getting the pre-order, in-order, and post-order traversals
    vector<vector<int>> traversals = sol.preInPostTraversal(root);

    // Printing the traversals
    cout << "Preorder traversal: ";
    printVector(traversals[0]);

    cout << "Inorder traversal: ";
    printVector(traversals[1]);

    cout << "Postorder traversal: ";
    printVector(traversals[2]);

    return 0;
}
