#include<bits/stdc++.h>
using namespace std;

int sumOfDigit(int n)
{
   if(n==0) return 0;
   int r=n%10;
   int p=sumOfDigit(n/10);
   return r+p;
}
int main()
{
    int n;cin>>n;
    int result=sumOfDigit(n);
    cout<<result<<endl;
}