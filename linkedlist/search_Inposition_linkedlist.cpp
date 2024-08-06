#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node* next;
    node(int x){
        data=x;
        next=NULL;
    }
};
int searchposition(node* head,int x){
    node*temp=head;
    int pos=1;
    while(temp!=NULL){
        if(temp->data==x){
            return pos;
        }
        else{
            pos++;
            temp=temp->next;
        }
    }
    return -1;
}


int main(){
    node*head=new node(05);
    head->next=new node(25);
    head->next->next=new node(15);
    head->next->next->next=new node(45);
    int position = searchposition(head, 15);
    if (position != -1) {
        cout << "Element found at position: " << position << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}