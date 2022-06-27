Problem description: https://leetcode.com/problems/kth-smallest-element-in-a-bst/
Time Complexity: o(n*log(k))
Space Complexity: o(log(n))

class Solution {
public:
    void sol(TreeNode *root,priority_queue<int> &q,int k)
    {
        if(!root) return ;
        q.push(root->val);
        if(q.size()>k) q.pop();
        sol(root->left,q,k);
        sol(root->right,q,k);
    
    }
        
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> q;
        sol(root,q,k);
        return q.top();
    }
};
