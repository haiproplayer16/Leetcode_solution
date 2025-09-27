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
    int maxDepth(TreeNode* root) {
        if(root == nullptr) return 0;
        int a = maxDepth(root->left);
        int b = maxDepth(root->right);
        return 1 + (a > b? a : b); 
    }
    int minDepth(TreeNode* root) {
        if(root == nullptr){
            return 0;
        }
        int left = minDepth(root->left);
        int right = minDepth(root->right);
        if(left == 0){
            return 1 + right;
        }
        if(right == 0){
            return 1 + left;
        }
        return 1 + min(left, right);
    }
};