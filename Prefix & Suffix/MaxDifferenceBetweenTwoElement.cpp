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

    int suffix = arr[n-1]; int maxi = INT_MIN ; int diff = 0;

    for(int i = n-2; i>=0; i--){
        suffix = max(suffix , arr[i]);
        diff = suffix - arr[i];
        maxi = max(maxi , diff);
    }
    cout<<maxi<<endl;
}