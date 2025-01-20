#include<bits/stdc++.h>
using namespace std;
int main()
{
    struct  Node
    {
       int data;
       struct Node *next;
    };

    struct Node *a=NULL;
    struct Node *b=NULL;
    struct Node *c=NULL;

    a=(struct Node*) malloc(sizeof(struct Node));
    b=(struct Node*) malloc(sizeof(struct Node));
    c=(struct Node*) malloc(sizeof(struct Node));     

    a->data=10;
    b->data=20;
    c->data=30;

    a->next=b;
    b->next=c;
    c->next=NULL;

    while(a !=NULL)
    {
        cout<<a->data<<" ";
        a=a->next;
    }

    
}