#include <bits/stdc++.h>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
class Solution {
public:
    vector<int> temp;
    vector<int> inorderTraversal(TreeNode* root) {
        if(root != nullptr){
        inorderTraversal(root->left);
        temp.push_back(root->val);
        inorderTraversal(root->right);
        }
        return temp;
    }
    vector<int> preorderTraversal(TreeNode* root) {
        if(root != nullptr){
        temp.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        }
        return temp;
    }
    vector<int> postorderTraversal(TreeNode* root) {
        if(root != nullptr){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        temp.push_back(root->val);
        }
        return temp;
    }
};