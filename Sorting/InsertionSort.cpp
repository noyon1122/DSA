#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={5,3,2,9,6};
    int i,hole,value;

  for(int i=1; i<5; i++)
  {
    value=arr[i];
    hole=i;
    while(hole>0 && arr[hole-1]>value)
    {
        arr[hole]=arr[hole-1];
        hole--;
    }
    arr[hole]=value;
  }

  //time complexity ==>> O(n^2)
}