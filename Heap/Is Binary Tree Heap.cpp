Problem Description: https://practice.geeksforgeeks.org/problems/is-binary-tree-heap/1/?page=1&difficulty[]=0&category[]=Heap&sortBy=submissions#
TIme Complexity: o(n)
Space Complexity: o(n)   --> if all leaves are at same level



bool isHeap(struct Node* tree) {
        // code here
        bool seen=false;
        queue<struct Node*> q;
        q.push(tree);
        while(q.size()!=0)
        {
            struct Node *temp=q.front();
            q.pop();
            if(temp->left)
            {
                if(seen or temp->left->data>temp->data) return false;
                else q.push(temp->left);
            }
            else
            {
                seen=true;
            }
            if(temp->right)
            {
                if(seen or temp->right->data>temp->data) return false;
                else q.push(temp->right);
            }
            else
            {
                seen =true;
            }
        }
        return true;
    }
