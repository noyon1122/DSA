#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
   if(a>b)
   {
    if(a%b==0) return b;
    return gcd(a,a%b);
   }
   else
   {
    if(b%a==0) return a;
    return gcd(b,b%a);
   }

int main()
{
    int n1,n2;cin>>n1>>n2;
    int result=gcd(n1,n2);
    cout<<result<<endl;
}


//========================using gcd method==============================
/*
int main()
{
    int a,b;cin>>a>>b;
    cout<<__gcd(a,b)<<endl;
}
*/

//====================gcd no built in method===============================

/*
int main()
{
    int a,b;cin>>a>>b;

    int res=min(a,b);
    while (res>0)

    {
      if(a%res==0 && b%res==0){
         cout<<res<<endl;
         break;
      }
      res--;
    }
    
}
*/