#include <iostream>
#include <vector>
using namespace std;

class Solution {

public:
  int isPowerOfFour(int n) {

    if (n == 1)
      return true;
    while (n / 4 > 0 && n % 4 == 0) {
      n = n / 4;
      if (n == 1)
        return true;

      // cout << n << endl;
    }

    return 0;
  }
}

;

int main() {
  Solution solution;

  vector<int> arr = {16, 5, 4, 0, 1};
  for (auto x : arr) {
    int res = solution.isPowerOfFour(x);
    cout << "Is PowerOfThree " << res << endl;
  }

  return 0;
}
