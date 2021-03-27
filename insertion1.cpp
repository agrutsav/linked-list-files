#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
          int data;
          Node* next;
};
    //  Transversal of linked list
void linkedlistTraversal(Node* n)
{
    while (n!=NULL)
    {
        cout<<n->data<<"  ";
        n=n->next;
      
    }
    cout<<endl;
    
}
    //  insertion at beginning
Node* push(Node* head, int data)
{
    Node* p=new Node();
    p->next=head;
    p->data=data;
    return p;

}
      //insertion at between
Node* bet(Node* head, int data, int index)
{
    Node* ptr=new Node();
    Node* p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;

}

//    insertion at end 
Node* End(Node* head, int data)
{
    Node* ptr=new Node();
    ptr->data=data;
    Node* p=head;

    while(p->next!=NULL)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
    return head;

}
int main()
{
    
       //creating node
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=66;
    third->next=NULL;

    linkedlistTraversal(head); 
    head=push(head, 85);              //calling insertion at beginning
    head=bet(head,82,3);              //calling insertion at between
    head=End(head,101);                //calling insertion at last
    linkedlistTraversal(head);


    return 0;
}