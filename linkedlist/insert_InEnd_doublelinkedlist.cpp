#include<bits/stdc++.h>
using namespace std;

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
node* insertend(node*head,int x){
    node* temp=new node(x);
    if(head==NULL){
        return temp;
    }
    node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    temp->prev=curr;

    return head;

}

int main(){
    node*head=new node(5);
    node*temp1=new node(15);
    node*temp2=new node(25);

    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;

    head=insertend(head,55);

    show(head);

    return 0;
}