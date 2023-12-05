
// Note that you must do this in-place without making a copy of the array.
//
//  
//
// Example 1:
//
// Input: nums = [0,1,0,3,12]
// Output: [1,3,12,0,0]
// Example 2:
//
// Input: nums = [0]
// Output: [0]
//  

#include <iostream>
#include <vector>

using namespace std;

void display (vector<int> &arrs ){
  for(auto res : arrs){
    cout << res << endl;
  }
}
class Solution {

  public:
  void moveZeroes(vector<int> &nums){
  
    int len = 0; 

    int pointer = 0;

    while(pointer < nums.size()-1 ){
        if(nums[len] == 0){
        nums.push_back(nums[len]);
         nums.erase(nums.begin()+len);
      }else{
        len ++;
      }
      pointer+=1;
    }
    
    
    display(nums);
  }
}
;

int main(){


  Solution solution ;
  vector<int> arr {0,1,0,3,12};
  vector <int> arr1 {0,0,1};
  vector <int> arrs {2,1};
  solution.moveZeroes(arr1);


  return 0;


}
