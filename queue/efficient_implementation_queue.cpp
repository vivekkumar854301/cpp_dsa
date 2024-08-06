#include<bits/stdc++.h>
using namespace std;

struct Queue{
    int size;
    int length;
    int front;
    int * arr;
    Queue(int x){
        length=x;
        front=0;
        size=0;
        arr=new int[length];
    }
    bool isfull(){
        return (length==size);
    }
    bool isempty(){
        return (size==0);
    }
    int getfront(){
        if(isempty()){
            return -1;
        }
        else{
            return front;
        }
    }
    int getrear(){
        if(isempty()){
            return -1;
        }
        else{
            return (front+size-1)%length;
        }
    }
    int showgetrear(){
        if (isempty()){
            return -1;
        }
        else{
            return arr[(front+size-1)%length];
        }
    }
    int showgetfront(){
        if(isempty()){
            return -1;
        }
        else{
            return arr[front];
        }
    }


    void enque(int x){
        if(isfull()){
            return;
        }
       int rear=getrear();
        rear=(rear+1)%length;
        arr[rear]=x;
        size++;

    }
    void deque(){
        if(isempty()){
            return;
        }
        front=(front+1)%length;
            size--;
    }
    void show(){
        if(isempty()){
            return;
        }
        else{
            int count=0;
            for(int i=front;count<size;count++){
                cout<<arr[i]<<" ";
                i=(i+1)%length;
            }
            cout<<endl;
        }
    }
   
};


int main(){
    Queue q(5);
    q.enque(5);
    q.enque(15);
    q.enque(25);
    q.enque(35);
    q.enque(45);
    q.deque();
    q.deque();
    q.deque();
    q.deque();
    // q.deque();
    q.enque(5);
    q.enque(15);

    q.show();
    cout<<"get front element "<<q.showgetfront()<<endl;
    cout<<"get rear element "<<q.showgetrear()<<endl;

    return 0;
}
