#include <iostream>

//
// Implement a first in first out (FIFO) queue using only two stacks. The
// implemented queue should support all the functions of a normal queue (push,
// peek, pop, and empty).
//
// Implement the MyQueue class:
//
//     void push(int x) Pushes element x to the back of the queue.
//     int pop() Removes the element from the front of the queue and returns it.
//     int peek() Returns the element at the front of the queue.
//     boolean empty() Returns true if the queue is empty, false otherwise.
//
// Notes:
//
//     You must use only standard operations of a stack, which means only push
//     to top, peek/pop from top, size, and is empty operations are valid.
//     Depending on your language, the stack may not be supported natively. You
//     may simulate a stack using a list or deque (double-ended queue) as long
//     as you use only a stack's standard operations.
//
//
using namespace std;

class MyQueue {

private:
  int front;
  int rear;
  int arr[5];

public:
  MyQueue() {
    front = -1;
    rear = -1;
    for (int x = 0; x < sizeof(arr) / sizeof(arr[0]); x++) {
      arr[x] = 0;
    }
  };

  void display() {

    for (auto x : arr) {
      cout << x << endl;
    }
  }
  void push(int x) {
    // we gonna check it if its empty
    // and initial the front and rear to be 0 if its empty
    if (empty()) {
      front = rear = 0;
      arr[front] = x;
    } else {
      rear++;
      arr[rear] = x;
    }
  }

  int pop() {
    // remove the front and move to the next one

    int lastElement = 0;
    if (empty()) {
      return 0;
    }

    else if (rear == front) {
      lastElement = arr[front];
      arr[front] = 0;
      rear = front = -1;
    } else {
      lastElement = arr[front];
      arr[front] = 0;
      front++;
    }

    cout << "Rear  " << rear << "Front " << front << endl;
    return lastElement;
  }

  int peek() {

    cout << "PEEK and top " << arr[front] << endl;
    return arr[front];
  }

  bool empty() {
    if (front == -1 && rear == -1) {
      return true;
    }
    return false;

    return 0;
  }
};

int main() {

  //
  // Input
  // ["MyQueue", "push", "push", "peek", "pop", "empty"]
  // [[], [1], [2], [], [], []]
  // Output
  // [null, null, null, 1, 1, false]
  //
  // Explanation
  //
  // ["MyQueue","push","push","push","push","pop","push","pop","pop","pop","pop"]
  // MyQueue *myQueue = new MyQueue();
  // myQueue->push(1); // queue is: [1]
  // myQueue->push(2); // queue is: [1, 2] (leftmost is front of the queue)
  // myQueue->display();
  // myQueue->peek();                 // return 1
  // int pops = myQueue->pop();       // return 1, queue is [2]
  // bool isEmpty = myQueue->empty(); // return false
  // cout << "is Empty " << isEmpty << "Pops " << pops << endl;
  // myQueue->display();
  //
  //

  // ["MyQueue","push","push","push","push","pop","push","pop","pop","pop","pop"]
  MyQueue *myQueue = new MyQueue();
  myQueue->push(1); // queue is: [1]
  myQueue->push(2); // queue is: [1, 2] (leftmost is front of the queue)
  myQueue->push(3);
  myQueue->push(4);
  myQueue->pop();
  myQueue->push(5);
  myQueue->display();
  myQueue->pop();
  myQueue->pop();
  myQueue->pop();
  myQueue->pop();
  myQueue->display();
  myQueue->peek();                 // return 1
  int pops = myQueue->pop();       // return 1, queue is [2]
  bool isEmpty = myQueue->empty(); // return false
  cout << "is Empty " << isEmpty << "Pops " << pops << endl;
  myQueue->display();

  return 0;
}
