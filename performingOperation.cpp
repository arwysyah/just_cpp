#include <iostream>
#include <vector>


using namespace std;


class Solution {
  public:
  int finalValueAfterOperations (vector<string>& arr ){
  int counter = 0;


    for(int x = 0; x<arr.size(); x+=1){
      cout << arr[x] << endl;
      if(arr[x] == "++X" ||  arr[x] == "X++"){
      counter++;
      }else {
      counter --;
      }
    }
    cout << counter << endl;
    return counter;
  }  
  
}

;
 int main (){

Solution solution;
  vector<string> res = {"++X","++X","X++"} 
 ; 

  int result = solution.finalValueAfterOperations(res);
cout << result << endl;
  return 0;
}
