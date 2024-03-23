#include <iostream>
#include <iterator>
#include <ostream>
#include <utility>
#include <vector>
using namespace std;

class Solution {

public:
  vector<vector<int>> permutate(vector<int> &nums) {
    vector<vector<int>> result;
    if (nums.size() <= 1) {
      return {nums};
    }

    for (int x = 0; x < nums.size(); ++x) {

      vector<int> cloned(nums.begin(), nums.end());
      cloned.erase(cloned.begin() + x);
      auto res = permutate(cloned);
      for (int n = 0; n < res.size(); n++) {
        vector<int> _temp = res[n];
        _temp.insert(_temp.begin(), nums[x]);
        result.push_back(_temp);
      }
    }

    return result;
  }
};
void display(vector<vector<int>> arrs) {
  for (int i = 0; i < arrs.size(); ++i) {
    for (int x : arrs[i]) {
      cout << x << endl;
    }
  }
}
int main() {

  Solution s;
  vector<int> exa = {1, 2, 3};
  vector<vector<int>> res = s.permutate(exa);
  display(res);
}
