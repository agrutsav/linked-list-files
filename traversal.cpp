#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
          int data;
          Node* next;

};
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

    linkedlistTraversal(head); 


    return 0;
}