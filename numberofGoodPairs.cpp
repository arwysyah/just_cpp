#include <iostream>

#include <vector>


using namespace std;


class Solution {



  public:
  int numIdenticalPairs( vector<int>& nums ){
    int counter =  0;
  for(int x = 0 ; x<nums.size();x+=1){
      for(int z=x+1;z<nums.size();z++){
        if(nums[x] == nums[z]){
          counter++;
         
        }

      }
    }
    cout << counter << endl;
    return counter;

  }

};

int main (){


  Solution sol;
  vector<int> arrs = {1,2,3,1,1,3};
  vector <int > arrs2 = {1,1,1,1};
  int result = sol.numIdenticalPairs(arrs2);
  return 0;

}
