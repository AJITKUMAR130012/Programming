Problem Statement:https://practice.geeksforgeeks.org/problems/level-order-traversal-in-spiral-form/1/?page=1&difficulty[]=0&status[]=unsolved&category[]=Stack&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(n)    // stw stack approach



vector<int> findSpiral(Node *root)
{
    //Your code here
     vector<int> ans;
     if(!root) return ans;
    stack<Node*> s1;
    stack<Node*> s2;
    s1.push(root);
   
    while(s1.size()>0 or s2.size()>0)
    {
        while(s1.size()>0)
        {
            Node *temp=s1.top();
            ans.push_back(temp->data);
            s1.pop();
            if(temp->right) s2.push(temp->right);
            if(temp->left) s2.push(temp->left);
        }
        while(s2.size()>0)
        {
           
                Node *temp=s2.top();
                ans.push_back(temp->data);
                s2.pop();
                if(temp->left) s1.push(temp->left);
                if(temp->right) s1.push(temp->right);
            
        }
    }
    return ans;
}
