#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*next;
    node(int x){
        data=x;
        next=NULL;
    }
};

void show(node*head){
    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}

int main(){
    node*head=new node(10);
    head->next=new node(25);
    head->next->next=new node(35);
    head->next->next->next=new node(45);

    show(head);
    return 0;

}