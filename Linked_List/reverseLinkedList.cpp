#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

struct Node *createLinkedList(int arr[],int size)
{
    struct Node *head=NULL,*temp=NULL,*current=NULL;

    for(int i=0; i<size; i++)
    {
         temp=(struct Node*)malloc(sizeof(struct Node));
         temp->data=arr[i];
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

void reverseLinkedList(struct Node *head)
{
    struct Node *pre=NULL,*current=head,*next=NULL;

    while (current !=NULL)
    {
        next=current->next;

        current->next=pre;

        pre=current;
        current=next;
    }
    head=pre;
    while (head !=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
    
    
}
int main()
{
    int arr[5]={4,6,2,9,1};
    struct Node *head,*newHead;
    head=createLinkedList(arr,5);
    newHead=head;
     while(head !=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
  reverseLinkedList(newHead);
    
}