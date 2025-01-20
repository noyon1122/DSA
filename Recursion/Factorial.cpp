#include<bits/stdc++.h>
using namespace std;
// int Fact(int n)
// {
//     if(n==1) return 1;

//     return n*Fact(n-1);
// }
// int main()
// {
//   int n;cin>>n;
//   cout<<Fact(n)<<endl;
// }


int fact(int n)
{
  if(n==0) return 1;

  return n*fact(n-1);
}

int main()
{
  int n;cin>>n;
  int result=fact(n);
  cout<<result<<endl;
}