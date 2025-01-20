#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,target;cin>>n>>target;

    int arr[n+1];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    //first occurence

    int l=0,r=n-1,mid,first=-1,last=-1;

    while (l<=r)
    {
       mid=l+(r-l)/2;
       if(arr[mid]==target)
       {
        first=mid;
        r=mid-1;
       }
       else if(arr[mid]<target)
       {
        l=mid+1;
       }
       else{
        r=mid-1;
       }
    }

     //last occurence

     l=0,r=n-1,mid;

    while (l<=r)
    {
       mid=l+(r-l)/2;
       if(arr[mid]==target)
       {
        last=mid;
        l=mid+1;
       }
       else if(arr[mid]<target)
       {
        l=mid+1;
       }
       else{
        r=mid-1;
       }
    }

    cout<<first<<" "<<last<<endl;

    //time complexity logn
    
}