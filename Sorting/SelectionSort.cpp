#include<bits/stdc++.h>
using namespace std;
void swapping(int &a , int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}
int main()
{
    int arr[8]={1,5,32,6,1,9,3,10};

    int minIndex,i,j;

    for(i=0; i<8; i++)
    {
        minIndex=i;
        for(j=i+1; j<8; j++)
        {
            if(arr[j]<arr[minIndex])
            {
                minIndex=j;
            }
        }
          
        // swap(arr[i],arr[minIndex]);
        swapping(arr[i],arr[minIndex]);
    }

     for(int i=0; i<8; i++)
     {
        cout<<arr[i]<<" ";
     }

     //timecomplexity -- O(n^2)
}