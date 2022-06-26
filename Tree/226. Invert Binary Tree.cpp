Problem Description: https://leetcode.com/problems/invert-binary-tree/
Time Complexity: o(n)    --> beacuase we have to traverse all the node by recursive calling
Space Complexity: o(logn)   --> space taken by stack while recursive call and we kanow that stack will grow till stack size


class Solution {
public:
    void sw(TreeNode *root)
    {
        if(!root) return;
        sw(root->left);
        sw(root->right);
        swap(root->left,root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        sw(root);
        return root;
    }
};
