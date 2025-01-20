#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *createLinkedList(int arr[] ,int size)
{
  struct Node *head=NULL, *temp=NULL,*current=NULL;

  for(int i=0; i<size; i++)
  {
    temp=(struct Node*)malloc(sizeof(struct Node));

    temp->data = arr[i];
    temp->next=NULL;

    if(head==NULL)
    {
        head=temp;
        current=temp;
    }
    else{
        current->next=temp;
        current=current->next;
    }
  }
  return head;
}


int main()
{
    int arr[3]={10,20,30};

  

     struct Node *head;
     head=createLinkedList(arr,3);

     while (head !=NULL)
     {
       cout<<head->data<<"->";
       head=head->next;
     }
     cout<<"NULL";
     

}



