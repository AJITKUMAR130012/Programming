Problem Statement: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/buy-and-sell-stocks-ota-official/ojquestion
Space Complexity: o(1)
Time Complexity: o(n)



#include <iostream>
#include<bits/stdc++.h>

using namespace std;

void Transaction(vector<int> arr) {

  int ans=INT_MIN;
  int min=arr[0];
  for(int i=0;i<arr.size();i++)
  {
      if(arr[i]<=min) min=arr[i];
      ans=max(ans,(arr[i]-min));
  }
  cout<<ans<<" ";
  return;
}

int  main() {
  int n;
  cin >> n;
  vector<int>arr(n, 0);
  for (int i = 0; i < arr.size(); i++) {
    cin >> arr[i];
  }
  Transaction(arr);
  return 0;
}
