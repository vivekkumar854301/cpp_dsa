#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node*next;
    Node(int a){
        data=a;
        next=NULL;
    }

};
void show(Node* head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    show(head->next);
}
Node* insertend(Node*head,int x){
    Node*temp=new Node(x);
    if(head==NULL){
        return temp;
    }
    Node* curr=head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}

int main(){
 Node*head=new Node(5);
 head->next=new Node(15);
 head->next->next=new Node(25);
 head=insertend(head,35);
 show(head);


}