#include<bits/stdc++.h>
using namespace std;
int main()
{
    int binaryResult[32];
    int n,i=0;
    cin>>n;
   
    while(n>0)
    {
        binaryResult[i]=n%2;
        
        n=n/2;
        i++;
    }
    for(int j=i-1; j>=0; j--)
    {
        cout<<binaryResult[j];
    }
    cout<<endl;
    
}