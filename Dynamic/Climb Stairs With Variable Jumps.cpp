Problem Des: https://www.pepcoding.com/resources/online-java-foundation/dynamic-programming-and-greedy/climb-stairs-with-variable-jumps-official/ojquestion
T.c: o(n)
Space Complexity:o(n)
  
  #include <iostream>
#include<bits/stdc++.h>
using namespace std;

int cs(int arr[], int n){
    // write your code here
    vector<int> t(n+1,0);
    t[n]=1;
    for(int i=n-1;i>=0;i--)
    {
        int k=arr[i];
        for(int j=1;j<=k and i+j<=n;j++)
        {
            t[i]+=t[i+j];
        }
    }

    return t[0];
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }
    cout<<cs(arr,n)<<endl;
}
