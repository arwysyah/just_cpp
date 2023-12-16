#include <iostream>
#include <vector>

using namespace std ;

class Solution {
public:
      vector<int> getConcatenation(vector<int>& nums) {
          vector <int> data = {};      
    for(int i=1; i<=2; i++){
    for(int x = 0; x<nums.size() ;x++){
      data.push_back(nums[x]);
    }
    }
  return data;;
  }

  vector <int> getConcatenationMoreSmall (vector<int> &nums){
    int size = nums.size();
    for(int x= 0 ; x< size; x+=1){
      nums.push_back(nums[x]);
    }
    return nums;

  }

};


void printInside (vector <int> &arrs ){
  for (auto j : arrs){
    cout << j << endl;
  }
}
int main (){
vector<int> data = {1,1,2,2,3};
vector<int> data2 = { 1,132,123,};

Solution solution;
  vector <int> res = solution.getConcatenation(data);
/* printInside(res); */
 vector <int> result =  solution.getConcatenationMoreSmall(data2);
printInside(result);
  return 0;
}
