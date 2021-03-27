#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
         int data;
         Node* next;

};
    //   deletion from beginning
Node* beg(Node* head)
{
    Node* ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
        // deletion at index
Node* bet(Node* head, int index)
{
    Node* p=head;
    Node* q=p->next;
    for(int i=0; i<index-1; i++)
    {
        p=p->next;
        q=q->next;

    }
    p->next=q->next;
    free(q);
    return head;

}
        // to delete a 
void linkedlistTraversal(Node* n)
{
    while (n!=NULL)
    {
        cout<<n->data<<"  ";
        n=n->next;
      
    }
    
}
int main()
{
    

    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=66;
    third->next=NULL;

    // head=beg(head);
    head=bet(head,2);              //calling of a function to delete from end

    linkedlistTraversal(head); 


    return 0;
}

