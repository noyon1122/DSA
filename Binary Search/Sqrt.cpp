//Given a non-negative integer x, return the square root of x rounded down to the nearest integer.
// The returned integer should be non-negative as well.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;

    if(n<2) {
        cout<<n<<endl;
        return 0;
    }

    int l=1,r=n,mid,ans;

    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(mid==n/mid) //mid*mid==n
        {
            cout<<mid<<endl;
            return 0;
        }
        else if(mid<n/mid) //mid*mid<n;
        {
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;
}