#include <iostream>
using namespace std;

class MyQueue {
    int size;
    int * arr;
    int front;
    int rear;
    int cnt;
public:
    MyQueue() {
        size = 4;
        arr = new int[size];
        front = 0;
        rear = 0;
        cnt = 0;
    }

    ~MyQueue() {
        delete[] arr;
    }

    void push(int x) {
        if (cnt == size) {
            cout << "No space" << endl;
            return;
        }
        arr[rear % size] = x;
        rear++;
        cnt++;
    }

    int top() {
        if (cnt == 0) {
            return -1; // or throw an exception
        }
        return arr[front % size];
    }

    int pop() {
        if (cnt == 0) {
            cout << "Queue is empty" << endl;
            return -1; // or throw an exception
        }
        int poppedValue = arr[front % size];
        arr[front % size] = -1; // Optional: Invalidate the popped position
        front++;
        cnt--;
        return poppedValue;
    }

    int getSize() const {
        return cnt;
    }
    
    
    void print() const {
    for (int i = front; i < rear; i++) {
        cout << arr[i % size] << " ";
    }
    cout << endl; // Optional: add a newline at the end of the print
}
    
};

int main() {
    MyQueue q;
    q.push(3);
    q.push(5);
    q.push(7);
    q.push(9);

    cout << "Top element: " << q.top() << endl;
    cout << "Size: " << q.getSize() << endl;

    q.pop();
    cout << "Top element after pop: " << q.top() << endl;
    cout << "Size after pop: " << q.getSize() << endl;

    q.push(11); // This should print "No space" if queue is full
    q.push(15);
    q.print();
    return 0;
}


