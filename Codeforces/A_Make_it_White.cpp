#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int k=0, j=0,count=0;
          for(int i=0; i<n; i++) {
           if(s[i]=='B' && k==0)
           {
              k=i+1;
              j=i+1;
           }
           else if(s[i]=='B' && k!=0) {
            j=i+1;
           }
        }
        cout<<j-k+1<<endl;
    }
}