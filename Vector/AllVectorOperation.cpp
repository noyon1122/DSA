#include<bits/stdc++.h>
using namespace std;
int main(){

     // vectaor declaration and initialization 
   /*
    vector<int>v;
    int n;
    for(int i=0; i<10; i++)
    {
        cin>>n;
        v.push_back(n);
    }
   */

   

     //sort, reverse an array and erase 
   /*
    vector<int>nums={5,4,7,2,5,6,7,3,2,4,6,9};
    //sort an array or vector
    sort(nums.begin(),nums.end());
   reverse(nums.begin(),nums.end());
    erase element from o index to 2 index 
    v.erase (nums.begin(),nums.begin()+3);
   */ 


   //unique a vector
   /*
    //at first sort the array
    nums.erase(unique(nums.begin(),nums.end()),nums.end());
    for(auto u:nums)
    {
        cout<<u<<" ";
    }*/


   //another way 
   /*
    vector<int>v={1,2,5,6,3,5,7,3,4,4};  
   
    sort(v.begin(),v.end());  //O(nlog2n)
    //unique(v.begin(),v.end());
    int Size=unique(v.begin(),v.end())-v.begin(); //O(n)
    cout<<Size<<endl;
    for(int i=0; i<Size; i++)
    {
       cout<<v[i]<<" ";
    }
   */

    //find max-element form 2 to 6 no index
/*
 vector<int>nums={1,2,4,5,7,8,8,4,8,8,9};
    vector<int>::iterator it=max_element(nums.begin()+1,nums.begin()+6);
    cout<<*it<<endl;
*/

 //index of the max element and min element
/*
vector<int>v={1,2,4,5,7,8,8,4,8,8,9};
 int maxIndex=max_element(v.begin(),v.end())-v.begin();
 cout<<maxIndex<<endl;
*/
}