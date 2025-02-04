//1 0 1 0 0 1 =>> 0 0 0 1 1 1 

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n+1];

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];       
    }

    int start=0,end=n-1;

    while(start<=end)
    {
        if(arr[start]==0)
        {
            start++;
        }
        else{
            if(arr[end]==1)
            {
                end--;
            }
            else{
                swap(arr[start],arr[end]);
                start++;
                end--;
            }
        }
    }
     for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";       
    }

   
   
}