Problem Statement: https://practice.geeksforgeeks.org/problems/preorder-traversal/1/?page=1&difficulty[]=-2&difficulty[]=-1&category[]=Stack&sortBy=submissions
Time Complexity: o(n)
Space Complexity: o(n)


vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> ans;
  if(!root) return ans;
  stack<Node*> S;
  S.push(root);
  while(S.size()!=0)
  {
      Node *x=S.top();
      S.pop();
      ans.push_back(x->data);
      if(x->right) S.push(x->right);
      if(x->left)  S.push(x->left);
      
  }
  return ans;
}
