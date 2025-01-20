#include<bits/stdc++.h>

using namespace std;

int main()
{
    //time complexity O(logn)
    int arr[7]={6,5,1,7,8,44,14};
    int target=77;

    //step1 -> make the array is sorted if it is not sorted

    sort(arr,arr+7);

   //step 2 -> assume left and right index left=0,right=n-1
    int leftIndex=0,rightIndex=6;

    //step 3 -> loop throw on the array

    while(leftIndex<=rightIndex)
    {
        //find the mid  index and it's value

        int mid=(leftIndex+rightIndex)/2;

        //check mid value ==target value

        if(target==arr[mid])
        {
            cout<<"Value Found"<<endl;
           return 0;
        }
        else if(target<=arr[mid])
        {
            rightIndex=mid-1; //earase the right side of the mid
        }
        else{
            leftIndex=mid+1;
        }
    }

    cout<<"value Not found"<<endl;


}
