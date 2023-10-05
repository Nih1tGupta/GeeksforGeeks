//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends



class Solution
{
    public:
  void rearrange(struct Node *head)
    {
        Node* odd = head;Node* even = head->next; Node* even1=even;
    while(even!=NULL && even->next!=NULL)
    {
        odd->next = odd->next->next;
        even->next=even->next->next;odd=odd->next;
        even=even->next;
    }
     Node *current,*nextnode,*prev;
     current=nextnode=even1;
     prev=NULL;
     while(current!=0)
     {
         nextnode=current->next;current->next=prev; prev=current; current=nextnode;
     }
     odd->next=prev;
    }
    
};



//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends