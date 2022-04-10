Problem Statement: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/buy-and-sell-stocks-ita-official/ojquestion
Time Complexity: o(n)
Space Complexity:o(1)

#include <iostream>
#include <vector>

using namespace std;

void transactions(vector<int> arr) {

int n=arr.size();
// write your code here
    int b=arr[0];
    int ans=0;
    int s=arr[0];
    bool flag=true;
    for(int i=1;i<arr.size();i++)
    {
      if(arr[i]<s)
      {
          ans+=(s-b);
          b=arr[i];
          s=arr[i];
      }
      else
      {
          s=arr[i];
      }
    }
    if(arr[n-1]>b) ans+=(arr[n-1]-b);
    cout<<ans<<" ";

}

int main() {
  int n ;
  cin >> n;
  vector<int> arr(n, 0);
  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }

  transactions(arr);
  return 0;
}
