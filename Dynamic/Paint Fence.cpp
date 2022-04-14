Problem Statement: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/paint-fence-official/ojquestion
Time Complexity: o(n)
Space Complexity:o(n)
  
  #include <iostream>
#include <vector>

using namespace std;

int main() {
  int n ;
  cin >> n ;
  int k ;
  cin >> k ;
  if(n==1) cout<<"1";
  else
  {
      vector<vector<int>> t(2,vector<int>(n+1));
      for(int i=2;i<=n;i++)
      {
          if(i==2) {
              t[0][i]=k;
              t[1][i]=k*(k-1);
          }
          else
          {
              t[0][i]=t[1][i-1];
              t[1][i]=(t[0][i-1]+t[1][i-1])*(k-1);
          }
      }
      cout<< t[0][n]+t[1][n];
      
  }

  //write your code here
}
