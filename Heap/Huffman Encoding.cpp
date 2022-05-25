Problem Statement: https://practice.geeksforgeeks.org/problems/huffman-encoding3345/1/?page=1&difficulty[]=1&category[]=Heap&sortBy=submissions
Time Complexity: o(nlogn)
Space Complexity: o(n)
  
  
  struct node
	    {
	        int x;
	        int y;
	        struct node *left,*right;
	        node(int t)
	        {
	            x=t;
	            left=NULL;
	            right=NULL;
	        }
	    };
	     void preorder(struct node* t,vector<string> &ans,string s)
	    {
	        if(!t->left and !t->right)
	        {
	            ans.push_back(s);
	            return;
	        }
	        string op1=s;
	        string op2=s;
	        if(t->left)
	        op1+=to_string(((t->left)->y));
	        if(t->right)
	        op2+=to_string((t->right)->y);
	        preorder(t->left,ans,op1);
	        
	        preorder(t->right,ans,op2);
	    }
	    class cmp{
	        public:
	        bool operator()(struct node *a,struct node *b)
	        {
	            return a->x>b->x;
	        }
	    };
		vector<string> huffmanCodes(string S,vector<int> f,int N)
		{
		    // Code here
		    priority_queue<struct node*,vector<struct node*>,cmp> p;
		    for(int i=0;i<N;i++)
		    {
		        struct node *t=new struct node(f[i]);
		        p.push(t);
		        
		    }
		    while(p.size()!=1)
		    {
		        struct node *v=p.top();
		        p.pop();
		        struct node *u=p.top();
		        p.pop();
		        int l=v->x+u->x;
		        struct node *r=new struct node(l);
		        r->left=v;
		        v->y=0;
		        r->right=u;
		        u->y=1;
		        p.push(r);
		    }
		    struct node *e=p.top();
		    vector<string> ans;
		    string s="";
		    preorder(e,ans,s);
		    
		    return ans;
		}
