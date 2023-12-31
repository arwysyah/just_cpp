#include <iostream>
#include <vector>

using namespace std;


void visual (vector<int>& arrs){
  for(int x = 0 ; x<arrs.size();x++){
    cout << arrs[x]<<endl;
  }
}
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
            int start = 0;
    while(start < arr.size()){
      if(arr[start] == 0){
 arr.resize(arr.size()+ 1);
int temp = arr[start + 1];
arr[start+1] = arr[start];

    arr[start]= 0;
        // int x = start;
  //       while(x < arr.size()-1){
  //         arr[x-1]=arr[x];
  //       x+=1;
  //       }
  //       arr[start+1] = 0;
  //       /*        arr.resize(arr.size() + 1); */
        
        start+=1;
      arr.pop_back();
      }
      start+=1;
    
    }

visual(arr);
  }

};



int main(){
Solution solution ;
  vector <int> arr1= {1,0,2,3,0,4,5,0};
  /* {1,0,0,2,3,0,0,4} */
    vector <int> arr2= {1,2,3}; 

  solution.duplicateZeros(arr1);
  return 0;
}
