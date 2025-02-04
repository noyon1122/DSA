// 3 4 -2 5 8 20 -10 8
// 3+4+(-2)+5+8== 20+(-10)+8

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

    int totalsum=0,prefix=0;
    
    //calculate total sum of the input
    for(int i=0; i<n; i++)
    {
        totalsum+=arr[i];
    }

    //check array can be divided or not
     int ans;
    for(int i=0; i<n-1; i++)
    {
        prefix+=arr[i];
        ans=totalsum-prefix;

        if(ans==prefix)
        {
            cout<<"Array can be divided"<<endl;
            return 0;
        }
    }

     cout<<"Not be divided"<<endl;

}