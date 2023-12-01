#include <iostream>
#include <vector>


using namespace std;

class Solution {
public:
  int search(vector<int> &arr, int start, int end, int target ){
   if(start > end ) {
      return -1;
    }
    int mid = start + (end - start)/2;
    if(arr[mid] == target){
      return mid;
    }
    if(arr[mid] > target){
      return search(arr,start,mid-1,target);
    }
    return search (arr,mid+1,end,target);
  }
};

int main(){
cout << "Hello from binary neovim" << endl;
  Solution solution;
  vector<int> arrs = {1,2,3,4,6,7,8,9};
  int result = solution.search(arrs,0,arrs.size(),7);
  cout << result << endl;

  return 0;

}
