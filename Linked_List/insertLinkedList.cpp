#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next;
};

void printLinkedList(struct Node *head)
{
    struct Node *temp=head;
    while(temp !=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void insertInAnyPosition(struct Node *head,int position,int data)
{
    int counter=0;
    struct Node *temp=head;
    while (temp!=NULL)
    {
         counter++;

         if(counter==position)
         {
            struct Node *newNode=(struct Node*)malloc(sizeof(struct Node));
            newNode->data=data;
            newNode->next=temp->next;
            temp->next=newNode;
         }

      temp=temp->next;   
    }

    printLinkedList(head);
    
}


void insertedLinkedList(struct Node *head,int data)
{
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=head;
    
    printLinkedList(temp);

}

void insertedAtLastLinkedList(struct Node *head,int data)
{
    struct Node *current=head;
    while (current->next !=NULL)
    {
       current=current->next;
    }
    
    struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=data;
    temp->next=NULL;
    current->next=temp;
    printLinkedList(head);

}



struct Node *createLinkedList(int arr[],int size)
{
    struct Node *temp=NULL,*head=NULL,*current=NULL;

    for(int i=0; i<size; i++)
    {
        temp=(struct Node *)malloc(sizeof(struct Node));

        temp->data=arr[i];
        temp->next=NULL;

        if(head ==NULL)
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
    int arr[6]={4,6,7,1,9,3};
    struct Node *head;
    head=createLinkedList(arr,6);
    cout<<"The origila LinkedList"<<endl;
    printLinkedList(head);
     cout<<"Inserted a node at beginnig to a LinkedList"<<endl;
    insertedLinkedList(head,10);
    cout<<"Inserted a node at ending to a LinkedList"<<endl;
    insertedAtLastLinkedList(head,22);
    cout<<"Inserted a node at positon 2 to a LinkedList"<<endl;
    insertInAnyPosition(head,2,89);
}