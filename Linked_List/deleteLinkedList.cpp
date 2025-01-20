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
        temp=(struct Node *)malloc(sizeof(struct Node));
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



struct Node *deleteList(struct Node *head,int data)
{
    struct Node *dummyHead=(struct Node*)malloc(sizeof(struct Node));
    dummyHead->next=head;
    struct Node *temp=dummyHead;
    while(temp->next !=NULL)
    {
        if(temp->next->data==data)
        {
            temp->next=temp->next->next;
        }
        else{
            temp=temp->next;
        }
    }
    return dummyHead->next;
}

void PrintList(struct Node *head)
{
    struct Node *temp;
    temp=head;
    while (temp!=NULL)
    {
       cout<<temp->data<<"->";
       temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}
int main()
{
int arr[5]={2,6,4,5,6};
struct Node *head;
head=createLinkedList(arr,5);
PrintList(head);

struct Node *newHead;
newHead=deleteList(head,6);
PrintList(newHead);



}