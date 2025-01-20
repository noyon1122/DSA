#include<bits/stdc++.h>
using namespace std;

//print 1 to n

int Print(int n)
{
    
    if(n==0) return 0;
    Print(n-1);
    cout<<n<<endl;
    
}
//n to 1
int Print2(int n)
{
    if(n==0) return 1;
   
   cout<<n<<endl;
   Print2(n-1);

   
  

}

int main()
{
    int n;cin>>n;
  
   Print(n);
    cout<<"First Recursion is done!"<<endl;
    Print2(n);
    cout<<"Second Recursion is done!"<<endl;
}


// /*

// //Print 1 to n..
// int Print (int n)
//     {
//         if(n==0) return 1;
     
//        Print(n-1);
//       cout<<n<<endl;
       
//     }
// //Print n to 1

// int Print2 (int n)
//     {
//         if(n==0) return 1;

//        cout<<n<<endl;
//        Print2(n-1);
      
       
//     }
  
// int main()
// {
//     int n;cin>>n;
//    int result=Print(n);
   // cout<<result<<endl;
//     cout<<"First Recursion Done!!"<<endl;
//     Print2(n);
// }

//Calculate Sum 


// int Print(int n)
// {
    
//     if(n==0) return 0;
//     return n+Print(n-1);

    
// }


// */