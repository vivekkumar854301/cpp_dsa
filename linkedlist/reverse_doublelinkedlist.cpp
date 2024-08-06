#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*next;
    node*prev;
    node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }

};
void show(node* head){
    if(head==NULL){
        return;

    }
    cout<<head->data<<" ";
    show(head->next);
}
node* reverse(node*head){
    if(head==NULL && head->next==NULL){
        return head;
    }
    node* curr=head;
    node* prev=NULL;
    while(curr!=NULL){
        prev=curr->prev;
        curr->prev=curr->next;
        curr->next=prev;
        curr=curr->prev;
    }
    return prev->prev;
}

int main(){
    node*head=new node(5);
    node*temp1=new node(25);
    node*temp2=new node(35);

    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=reverse(head);
    show(head);
    return 0;
}