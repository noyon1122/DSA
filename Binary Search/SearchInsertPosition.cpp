#include<bits/stdc++.h>
using namespace std;
int main()
{

    //  int pos=lower_bound(v.begin(),v.end(),target)-v.begin();
    //  return pos;

     int n,target;cin>>n>>target;

    int arr[n+1];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    

    int l=0,r=n-1,index=n,mid;

    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(arr[mid]==target)
        {
            index=mid;
        }
        else if(arr[mid]<target)
        {
            l=mid+1;
        }
        else{
            index=mid;
            r=mid-1;
        }
    }
    cout<<index<<endl;

}