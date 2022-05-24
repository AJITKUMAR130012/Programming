Problem Statement: https://practice.geeksforgeeks.org/problems/inorder-traversal/1
Time Complexity: o(n)
Space Complexity: o(n)  ->size taken by stack---if all tree node be skewed towards left then it would take o(n) space


 vector<int> inOrder(Node* root) {
        // Your code here
        vector<int> ans;
        stack<Node*> s;
        while(1)
        {
            if(root)
            {
                s.push(root);
                root=root->left;
            }
            else
            {
                if(s.size()==0) break;
                root=s.top();
                s.pop();
                ans.push_back(root->data);
                root=root->right;
            }
        }
        return ans;
    }
  
  
