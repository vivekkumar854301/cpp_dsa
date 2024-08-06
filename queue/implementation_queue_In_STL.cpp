#include<bits/stdc++.h>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(25);
    q.push(35);
    q.pop();
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    cout<<q.back();
    return 0;
}