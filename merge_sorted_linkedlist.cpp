#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
          int data;
          Node* next;
};
Node* merge(Node* head1, Node* head2)
{
    Node* p1=head1;
    Node* p2=head2;
    Node* dummynode=new Node();
    Node* p3=dummynode;

    while(p1!=NULL&& p2!=NULL)
    {
        if(p1->data<p2->data)
        {
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next; 
    }
    while(p1!NULL)
    {
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!NULL)
    {
        p3->next=p2;
        p2=p1->next;
        p3=p3->next;
    }
}

int main()
{
    Node* head1=new Node();
    Node* second1=new Node();
    Node* third1=new Node();

    head1->data=7;
    head1->next=second1;

    second1->data=11;
    second1->next=third1;

    third1->data=66;
    third1->next=NULL;

    Node* head2=new Node();
    Node* second2=new Node();
    Node* third2=new Node();

    head2->data=6;
    head2->next=second2;

    second2->data=14;
    second2->next=third2;

    third2->data=43;
    third2->next=NULL;


    return 0;
}