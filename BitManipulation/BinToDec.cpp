#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ans=0,powOfTwo=1;
    int binaryNum[5];
    for(int i=0; i<4; i++)
    {
       cin>>binaryNum[i];
    }
    for(int i=3; i>=0; i--)
    {
        
      ans=ans+binaryNum[i]*powOfTwo;
      powOfTwo*=2;
    }
    cout<<ans;
  

}