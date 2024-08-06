#include <bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *next;
    node(int x) {
        data = x;
        next = NULL;
    }
};

struct Queue {
    node *front;
    node *rear;
    Queue() {
        front = NULL;
        rear = NULL;
    }

    void enque(int x) {
        node *temp = new node(x);
        if (front == NULL) {
            front = rear = temp;
            return;
        }
        rear->next = temp;
        rear = temp;
    }

    void deque() {
        if (front == NULL) {
            return;
        }
        node *temp = front;
        front = front->next;
        if (front == NULL) {
            rear = NULL;
        }
        delete temp;
    }

    void show(node *current) {
        if (current == NULL) {
            return;
        }
        cout << current->data << " ";
        show(current->next);
    }

    void show() {
        show(front);
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enque(1);
    q.enque(2);
    q.enque(3);
    q.enque(4);
    q.enque(5);
    q.show();
    return 0;
}