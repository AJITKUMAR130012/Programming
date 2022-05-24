Problem Description:https://practice.geeksforgeeks.org/problems/bst-to-max-heap/1/?page=1&difficulty[]=1&category[]=Heap&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(n) -vector is required to store inorder


void convertToMaxHeapUtil(Node* root)
    {
        // Your code goes here
        stack<Node*> s;
        vector<int> inorder;
        Node *temp=root;
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
                inorder.push_back(root->data);
                root=root->right;
                
            }
        }
     /*    for(int i=0;i<inorder.size();i++)
        {
            cout<<inorder[i]<<" ";
        }
        */
        reverse(inorder.begin(),inorder.end());
       root=temp;
        stack<Node*> s1;
        s1.push(root);
        int i=0;
        while(s1.size()!=0)
        {
             temp=s1.top();
            temp->data=inorder[i];
            
            i++;
            s1.pop();
            if(temp->left) s1.push(temp->left);
            if(temp->right) s1.push(temp->right);
          //  if(s1.size()==2) break;
        }
        
    }    
  
