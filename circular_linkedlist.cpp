// C++ program to implement
// the above approach
#include <bits/stdc++.h>
using namespace std;


class Node
{
	public:
	     int data;
	     Node* next;
};
void printlist(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<"  ";
        n=n->next;
    }
    cout<<endl;
    
} 
Node* beg(Node* head, int data)
{
    Node* p=new Node();
    p->data=data;
    Node* q=head;
    p->next=head;

    while(q->next!=head)
    {
        q=q->next;

    }
    q->next=p;
    head=p;
    return p;
}


int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* fourth=new Node();

    head->data=10;
    head->next=second;

    second->data=20;
    second->next=third;

    third->data=30;
    third->next=fourth;

    fourth->data=40;
    fourth->next=NULL;

    head=beg(head,5);

    printlist(head);
    return 0;

}

