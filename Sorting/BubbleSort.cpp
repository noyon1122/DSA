#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int size)
{
    int i,j,temp;

    for(i=0; i<size; i++)
    {
        for(j=0; j<size-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp; 
            }
        }
    }
}
int main()
{
    int arr[6]={7,23,4,5,1,9};
    
    bubbleSort(arr,6);

    for(int i=0; i<6; i++)
    {
        cout<<arr[i]<<" ";
    }


}