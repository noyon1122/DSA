// Given an integer array nums, find the -2,1,-3,4,-1,2,1,-5,4 
// subarray
//  with the largest sum, and return its sum.
#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n;cin>>n;
    int arr[n+1];

    //take input from the user
    for(int i=0; i<n; ++i)
    {
        cin>>arr[i];
    }

    int ans=INT_MIN;
    int prefix=0; 

    for(int i=0; i<n; i++)
    {
        prefix+=arr[i];
        ans=max(ans,prefix);
        if(prefix<0){
            prefix=0;
        }
    }
    cout<<ans<<endl;

}