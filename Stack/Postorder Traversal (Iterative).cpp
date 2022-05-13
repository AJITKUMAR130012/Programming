Problem Description: https://practice.geeksforgeeks.org/problems/postorder-traversal-iterative/1/?page=1&difficulty[]=1&category[]=Stack&sortBy=submissions
Time complexity: o(n)
Space Complexity: o(n) -->space taken by two stack

vector<int> postOrder(Node* node) {
        // code here
        stack<Node*> s1,s2;
        s1.push(node);
        while(s1.size()>0)
        {
            Node *t=s1.top();
            s1.pop();
            s2.push(t);
            if(t->left) s1.push(t->left);
            if(t->right) s1.push(t->right);
        }
        vector<int> ans;
        while(s2.size()!=0)
        {
            ans.push_back(s2.top()->data);
            s2.pop();
        }
        return ans;
    }
  
