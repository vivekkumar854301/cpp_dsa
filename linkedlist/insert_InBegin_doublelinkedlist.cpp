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
node* insertBegin(node* head,int x){
    node* temp=new node(x);
    temp->next=head;
    if(head!=NULL){
        head->prev=temp;
    }
    return temp;
}

void show(node* head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    show(head->next);
}

int main(){
    node*head=new node(15);
    node*temp1=new node(25);
    node*temp2=new node(35);

    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    head=insertBegin(head,5);
    show(head);
    return 0;
}