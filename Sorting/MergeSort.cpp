#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int r)
{
    int n1=mid-l+1,n2=r-mid;

    vector<int> L(n1),R(n2);

    for(int i=0; i<n1; i++) L[i]=arr[l+i];
    for(int j=0; j<n2; j++) R[j]=arr[mid+1+j];

    int i=0,j=0,k=l;

    //merge the temp vectors from l to r

    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }

        k++;
    }

    //copy of the remaining element of L[]

    while(i<n1)
    {
        arr[k]=L[i];
        i++;
        k++;
    }

    //copy of the reaminig element of R[]
    while(j<n2)
    {
        arr[k]=R[j];
        j++;
        k++;
    }


}

void mergeSort(int arr[],int l,int r)
{
    if(l>=r) return;
    int mid=l+(r-l)/2;

    mergeSort(arr,l,mid);
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
int main()
{
    int arr[8]={5,6,1,2,3,9,8,1};

    mergeSort(arr,0,7);

    for(int i=0; i<8; i++)
    {
        cout<<arr[i]<<" ";
    }
}