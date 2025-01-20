#include<bits/stdc++.h>
using namespace std;
int binarySearch(int l,int r,int arr[],int target)
{
    if(l>r) return -1;
    int mid=(l+r)/2;
    

    if(arr[mid]==target) {
        return mid;
    }
    else if(arr[mid]>target) {
        return binarySearch(l,mid-1,arr,target);
    }
    else{
        return binarySearch(mid+1,r,arr,target);
    }
    return -1;

}

int main()
{
    int arr[8]={1,2,3,4,5,6,7,8};

    int l=0,r=7,target=7;

    if(binarySearch(l,r,arr,target)>-1)
    {
        cout<<"Value found"<<endl;

    }
    else {
        cout<<"not found"<<endl;
    }

}