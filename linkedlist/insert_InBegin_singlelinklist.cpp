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
Node* insertbegin(Node*head,int x){
    Node*temp=new Node(x);
    temp->next=head;
    return temp;
}

int main(){
    Node* head=new Node(25);
    head->next=new Node(35);
    head->next->next=new Node(48); 
    head=insertbegin(head,45);
    show(head);

    return 0;
}