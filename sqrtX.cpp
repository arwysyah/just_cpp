#include <iostream>
#include <vector>

using namespace std;
class Solution {

public:
  int mySqrt(int x) {

    int start = 1;
    int end = x;
    int result = 1;
    if (x <= 1)
      return x;
    while (start <= end) {
      int mid = start + (end - start) / 2;
      int cond = x / mid;
      if (mid <= cond) {
        result = mid;
        start = mid + 1;
      } else
        end = mid - 1;
    }
    return result;
  }
};
int main() {

  Solution s;
  vector<int> nums = {1, 4, 6, 7, 8, 16, 100, 2147483647};
  for (size_t i = 0; i < nums.size(); i++) {
    int x = s.mySqrt(nums[i]);
    cout << x << endl;
  }
  return 0;
}
