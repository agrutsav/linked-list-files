#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
          int data;
          Node* next;
};
int counts(Node* head)
{
    int count=0;
    Node* news=head;                   //making of a new node but why as we can go with head
    while(news!=NULL)
    {
        news=news->next;
        count++;

    }
    return count;
}
int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();
    Node* fourth=new Node();

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=66;
    third->next=fourth;

    fourth->data=88;
    fourth->next=NULL;

    int count=counts(head);
    cout<<count<<" happy ending";

    return 0;
    
}