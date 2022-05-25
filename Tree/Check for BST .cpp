Problem Description: https://practice.geeksforgeeks.org/problems/check-for-bst/1/?page=1&company[]=Amazon&sortBy=submissions#
Time Complexity: o(n)
Space Complexity: o(h)
  
  
   bool fun(Node *root,int a,int b)
    {
        if(!root) return true;
        if(!fun(root->left,a,root->data)) return false;
        if(!fun(root->right,root->data,b)) return false;
        if(root->data>a and root->data<=b) return true;
        return false;
    }
    bool isBST(Node* root) 
    {
        // Your code here
       return  fun(root,INT_MIN,INT_MAX);
        
    }
  
