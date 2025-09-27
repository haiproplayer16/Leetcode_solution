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
    bool is_mirror(TreeNode* r1,TreeNode* r2){
        if (!r1 && !r2) return true;
        if (!r1 || !r2) return false;
        return r1->val == r2->val and is_mirror(r1->left,r2->right) and is_mirror(r1->right,r2->left);
    }
    bool isSymmetric(TreeNode* root) {
        return is_mirror(root->left,root->right);
    }
};