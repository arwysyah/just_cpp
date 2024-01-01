#include <iostream>
#include <iterator>
#include <vector>

// LEVEL MEDIUM

using namespace std;


class Solution {
private: void display (vector<vector<int>> arr){
    for(int x = 0; x< arr.size();x++){

      for(int j=0;j<arr[x].size();j++){
        cout << arr[x][j];
      }
      cout << endl;
    }
  }
  public: void rotate(vector<vector<int>> &matrix){
  int len = matrix.size()-1;
 // vector<vector<int>> arr(len+1, vector<int>(len+1));
 vector<vector<int>> arrs = matrix; 
    for(int i =len ; i>=0; i-- ){
      for(int j=0;j<=len;j++){
matrix[len-i][j] = arrs[len-j][len-i];
      }
    }
    display(matrix);
   };

};
int main (){

Solution solution ;

  vector<vector<int>> input = {
    {5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}
  };
// [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
  solution.rotate(input);
  vector<vector<int>> input2 ={{1,2,3},{4,5,6},{7,8,9}} ;
    // {{7,4,1},{8,5,2},{9,6,3}};
  solution.rotate(input2);

  return 0;

};


// NOTE : Actually this is took 0 MS but still lacking of Extra Space since its still using 
// an extra space ;
