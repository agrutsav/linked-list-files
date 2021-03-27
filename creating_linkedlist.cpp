#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
         int data;              
         Node* next; 
};

int main()
{
    Node* head=new Node();
    Node* second=new Node();
    Node* third=new Node();

    head->data=1;
    head->next=second;
    second->data=3;
    second->next=third;
    third->data=5;
    third->next=NULL; 
    return 0;

}

