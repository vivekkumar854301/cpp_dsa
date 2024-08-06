#include <bits/stdc++.h>
using namespace std;

struct Queue {
    int length;
    int size;
    int* arr;

    Queue(int x) {
        length = x;
        size = 0;
        arr = new int[length];
    }

    bool isfull() {
        return (size == length);
    }

    bool isempty() {
        return (size == 0);
    }

    void enque(int x) {
        if (isfull()) {
            return;
        }
        arr[size] = x;
        size++;
    }

    void deque() {
        if (isempty()) {
            return;
        }
        for (int i = 0; i < size - 1; i++) {
            arr[i] = arr[i + 1];
        }
        size--;
    }

    int getfront() {
        if (isempty()) {
            return -1;
        }
        return arr[0];
    }

    int getrear() {
        if (isempty()) {
            return -1;
        }
        return arr[size - 1];
    }

    void show() {
        if (isempty()) {
            return;
        }
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);
    q.enque(5);
    q.enque(10);
    q.enque(15);
    q.enque(20);
    q.enque(25);
    q.enque(35); // This won't be added as the queue is full
    q.deque();
    q.show();

    cout << "Front element: " << q.getfront() << endl;
    cout << "Rear element: " << q.getrear() << endl;

    return 0;
}
