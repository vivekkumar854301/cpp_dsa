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



int main(){
    Node*head=new Node(25);
    head->next=new Node(35);
    head->next->next=new Node(45);

    show(head);

    return 0;

}