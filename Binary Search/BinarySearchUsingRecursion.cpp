#include<bits/stdc++.h>
using namespace std;
int binarySearch(int l,int r,int arr[],int target)
{
    if(l>r) return -1;
    int mid=(l+r)/2;

    if(target==arr[mid])
    {
    
        return mid;
    }
    else if(target<arr[mid])
    {
       return binarySearch(l,mid-1,arr,target);
    }
    else{
       return binarySearch(mid+1,r,arr,target);
    }

    return -1;
}

int main()
{
    int arr[7]={6,5,1,7,8,44,14};
    int target=22;
    sort(arr,arr+7);

    int leftIndex=0,rightIndex=6;
    if(binarySearch(leftIndex,rightIndex,arr,target)>-1)
    {
          cout<<"value found"<<endl;
    }
    else{
        cout<<"Value Not found"<<endl;
     }
}