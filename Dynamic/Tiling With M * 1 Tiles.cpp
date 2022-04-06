Problem Description: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/tiling2-official/ojquestion
Time Complexity:o(n)
Space Complexity:o(n)
  
#include <iostream>
#include <vector>

using namespace std ;

int main() {
  int n ;
  cin >> n ;
  int m ;
  cin >> m ;
  if(m>n)
  {
      cout<<"1"<<endl;
      return 0;
  }
  vector<int> t(n+1,0);
  for(int i=1;i<=m;i++)
  {
      if(i==m) t[i]=2;
      else t[i]=1;
  }
  for(int i=m+1;i<=n;i++)
  {
      t[i]=t[i-1]+t[i-m];
  }
  cout<<t[n]<<endl;
  return 0;
  //   write your code here

}
