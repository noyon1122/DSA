#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid,int r)
{
  int n1=mid-l+1;
  int n2=r-mid;

  vector<int>L(n1),R(n2);

  for(int i=0;i<n1; i++) L[i]=arr[i+l];
  for(int j=0; j<n2; j++) R[j]=arr[j+mid+1];

  int i=0,j=0,k=l;

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

  while (i<n1 )
  {
     arr[k]=L[i];
     i++;
     k++;
  }

  while (j<n2)
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
    int arr[7]={2,3,7,6,4,12,1};
    mergeSort(arr,0,6);
    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
}