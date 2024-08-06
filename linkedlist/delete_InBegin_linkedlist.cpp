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
void show(Node*head){
    if(head==NULL){
        return;
    }
    cout<<head->data<<" ";
    show(head->next);
    cout<<endl;
}

Node* deletenode(Node*head,int x){
    Node*temp=head->next;
    if(head==NULL){
        return NULL;
    }
    else if(head->next==NULL){
        return NULL;
    }
    else{
        delete head;
        return temp;

    }
}




int main(){
    Node*head=new Node(05);
    head->next=new Node(15);
    head->next->next=new Node(25);
    head->next->next->next=new Node(35);
    head->next->next->next->next=new Node(45);
    head=deletenode(head,05);

    show(head);
    head=deletenode(head,15);
    show(head);

    return 0;
}