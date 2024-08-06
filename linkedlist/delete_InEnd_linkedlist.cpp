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
void show(Node*head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    show(head->next);
}
Node* deleteend(Node* head){
    Node*current=head;
    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        delete head;
        return NULL;
    }
    else{
        while(current->next->next!=NULL){
            current=current->next;
        }
        delete(current->next);
        current->next=NULL;
        return head;

    }
}
int main(){
    Node*head=new Node(05);
    head->next=new Node(25);
    head->next->next=new Node(35);
    head=deleteend(head);
    show(head);
    return 0;
}