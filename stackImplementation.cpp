#include <algorithm>
#include <iostream>


using namespace std;
/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
class MyStack {

  
  private:
  int arr[5];
  int count;
public:
  
    MyStack() {
    count =-1;
    for(int x = 0 ; x < sizeof(arr) / sizeof(arr[0]);x++){
      arr[x] = 0;
    }
    }
    
    void push(int x) {
    count ++;
    arr[count]= x;
    }
    
    int pop() {
    int x = 0;
     
     if(empty()){
      return 0;
    }else{
      x = arr[count];
      arr[count] = 0;

     count --;

      display();
    }
    return x;

    }
    
    int top() {
    int x = arr[count];

    cout << "here is the top of my Stack " <<x << endl;
       return x; 
    }
    
    bool empty() {
    if( count == -1 ){
      return true;
    }
    return false;
        
    }
  void display (){

    for(int y =0; y<sizeof(arr)/ sizeof(arr[0])  ;y++){
      cout << arr[y] << endl;
    }
  }
};


int main (){
//
//   MyStack * obj = new MyStack(); 
// obj->push(5);
//   obj->push(3);
//     cout << "After Push" << endl;
//   obj->display();
//
//  obj->pop();
//
//   cout << "After Pop" << endl;
//   obj->display();
  MyStack *myStack = new MyStack();
// myStack->push(1);
// myStack->push(2);
// // myStack->top(); // return 2
// myStack->pop();
//   myStack->top();// return 2
// myStack->empty(); // return False
// myStack->display();
//

myStack->push(1);
myStack->display();

cout <<"===========>" << endl;
  myStack->pop();
 myStack->top();
bool res = myStack->empty(); // return False
// myStack->display();
//  cout << res << endl; 
 
  return 0;



}
