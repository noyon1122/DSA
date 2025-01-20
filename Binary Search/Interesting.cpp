#include<bits/stdc++.h>
using namespace std;
int main()
{
    //array is reverse sorted
    int arr[6]={20,18,15,12,5,3};
    int target=19;
    int l=0,r=5,mid;
  int count=0;
    while(l<=r)
    {
        mid=(l+r)/2;

        if(arr[mid]==target) {
            count++;
            break;
        }
        else if(arr[mid]<target)
        {
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    if(count==0) cout<<"Not Found"<<endl;
    else{
        cout<<"Found"<<endl;
    }
}