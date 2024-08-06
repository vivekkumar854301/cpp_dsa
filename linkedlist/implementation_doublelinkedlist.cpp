#include<bits/stdc++.h>
using  namespace std;

struct node{
    int data;
    node*next;
    node*prev;
    node(int a){
        data=a;
        next=NULL;
        prev=NULL;
    }
};
void show(node*head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    show(head->next);
}


int main(){
    node*head=new node(05);
    node*temp2=new node(07);
    node*temp1=new node(25);

    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;

    show(head);
    
    return 0;
}