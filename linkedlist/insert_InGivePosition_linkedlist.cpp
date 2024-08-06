#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node* insertposition(Node*head,int x, int y){
    Node*temp=new Node(y);
    if(x==1){
        temp->next=head;
        return temp;
    }
    Node*curr=head;
    for(int i=1;i<x-2 && curr!=NULL;i++){
        curr=curr->next;

    }
    if(curr==NULL){
        return head;
    }
    temp->next=curr->next;
    curr->next=temp;
    return head;

}
void show(Node*head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    show(head->next);
}

int main(){
    Node*head=new Node(15);
    head->next=new Node(25);
    head->next->next=new Node(35);
    head=insertposition(head,2,45);

    show(head);

    return 0;
}