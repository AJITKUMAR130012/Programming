Problem Statement: https://practice.geeksforgeeks.org/problems/map-operations/1/?page=1&difficulty[]=-1&category[]=Map&sortBy=submissions#
Time complexity: Insert-->o(nlogn), Delete(erase)-->o(logn), Display-->o(n)
  
  map<int,int> mapInsert(int arr[],int n)
{
    map<int,int>mp;
   //Insert arr[i] as key and i as value
   for(int i=0;i<n;i++)
   {
       mp[arr[i]]=i;
   }
    
    
    return mp;
    
}


void mapDisplay(map<int,int>mp)
{
    //Print every key and value pair in a new line
    map<int,int>::iterator it;
    for( it=mp.begin();it!=mp.end();it++ )
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
 
}


void mapErase(map<int,int>&mp,int x)
{
   //Write the if and else condition to erase x from map
   int a=0;
   a=mp.erase(x);
   if(a==1)
    cout<<"erased "<<x;
    
    //else condition
    if(a!=1)
    cout<<"not found";
    
    
    cout<<endl;
}
