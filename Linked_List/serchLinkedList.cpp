#include<bits/stdc++.h>
using namespace std;

struct  Node
{
   int data;
   struct Node *next;
};

struct Node *createLinkedList(int arr[],int size)
{
    struct Node *head=NULL,*temp=NULL,*current=NULL;

    for(int i=0; i<size; i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));
        temp->data=arr[i];
        temp->next=NULL;
        
        if(head == NULL)
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

int searchLinkedList(struct Node *head,int value)

{
    int index=1;
    while (head !=NULL)
    {
       if(head->data==value)
       {
        return index;
       }
       index++;
       head=head->next;
    }

    return -1;
    
}

int main()
{
    int arr[5]={5,2,8,11,45};
    struct Node *head;
    head=createLinkedList(arr,5);

    cout<<"index of 8 is : "<<searchLinkedList(head,8)<<endl;

}

