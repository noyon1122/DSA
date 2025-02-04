//there have any pari of difference for target value 
// arr[end]-arr[start]==target

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //must be array sorted

    int arr[]={5,10,15,20,27,30,35,47};
    int target=50;
    int n=sizeof(arr)/sizeof(arr[0]);

    int start=0,end=1;

    while(end<n)
    {
       if(arr[end]-arr[start]==target)
       {
        cout<<"Found"<<endl;
        return 0;
       }
       else if(arr[end]-arr[start]<target)
       {
        end++;
       }
       else{
        start++;
       }
    }
    cout<<"Not Found"<<endl;

}