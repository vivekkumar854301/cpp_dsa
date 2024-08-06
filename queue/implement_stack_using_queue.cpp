#include<bits/stdc++.h>
#include<queue>
using namespace std;
struct MyStack{

    queue<int>q1,q2;
    int top(){
        return q1.front();
    }
    int size(){
        return q1.size();
    }
    int pop(){
        return q1.front();
    }
    void push(int x){
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    void show(){
        while(!q1.empty()){
            cout<<q1.front()<<" ";
            q1.pop();
        }
        cout<<endl;
    }

};

int main(){
    MyStack s;
    s.push(5);
    s.push(25);
    s.push(35);
    s.push(45);
    s.push(55);
    s.show();
    s.pop();
    s.show();

    return 0;
}