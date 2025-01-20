#include<bits/stdc++.h>
using namespace std;
void ReverseArray(int *arr,int f,int l)
{
    if(f>=l) {
        return;
    }
    swap(arr[f],arr[l]);
   

    ReverseArray(arr,f+1,l-1);


}
int main()
{
  int arr[5];
  for(int i=0; i<5; i++)
  {
    cin>>arr[i];
  }
 
  ReverseArray(arr,0,4);
  for(int i=0; i<5; i++)
  {
    cout<<arr[i]<<" ";
  }

 
}