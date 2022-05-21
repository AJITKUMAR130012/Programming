Problem Stgatement: https://practice.geeksforgeeks.org/problems/merge-k-sorted-linked-lists/1/?page=1&difficulty[]=1&category[]=Heap&sortBy=submissions
Time Complexty: o(nlogn)
Space Complexity: o(n)
  
  
  class cmp{
        public:
        bool operator()(pair<int,struct Node*> &a,pair<int,struct Node*> &b)
        {
            return a.first>b.first;
        }
    };
    
    
    Node * mergeKLists(Node *arr[], int K)
    {
           // Your code here
           priority_queue<pair<int,struct Node*>,vector<pair<int,struct Node*>>,cmp> q;
           for(int i=0;i<K;i++)
           {
               q.push({arr[i]->data,arr[i]});
           }
           struct Node *start=NULL;
           struct Node *temp;
           while(q.size()!=0)
           {
               int x=q.top().first;
               struct Node *p=q.top().second;
               if(p->next!=NULL)
               {
                   q.push({p->next->data,p->next});
               }
              Node *list=new Node(x);
              if(start==NULL)
              {
                  start=list;
                  temp=start;
              }
              else
              {
                  temp->next=list;
                  temp=temp->next;
              }
              q.pop();
              
           }
          
       /*   while(q.size()!=0)
          {
              cout<<q.top().first<<" ";
             cout<< q.top().second->data<<" ";
              q.pop();
          }
          */
          return start; 
           
    }
