#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n+1];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int left=0,right=n-1,mid,ans;

    while(left<=right)
    {
        mid=left+(right-left)/2;

        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1])
        {
            ans=mid;
            break;
        }
        else if(arr[mid]>arr[mid-1])
        {
           left=mid+1;
        }
        else{
       right=mid-1;
        }
    }
    cout<<ans<<endl;

}