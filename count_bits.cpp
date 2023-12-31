#include <cmath>
#include <iostream>

#include <vector>

using namespace std;

class Solution {

public:
  vector<int> countBits(int n) {

    vector<int> res = {

    };
    int counter = 0;
    for (int x = 0; x <= n; x++) {
      int reminder = 0;

      int xDuplicate = x;
      while (xDuplicate > 0) {
        reminder = xDuplicate % 2;
        xDuplicate = xDuplicate / 2;
        if (reminder == 1) {
          counter++;
        }
      }
      res.push_back(counter);
      counter = 0;
    }

    for (auto x : res) {
      cout << x << endl;
    }
    return res;
  }
};
int main() {

  Solution solution;

  vector<int> result = solution.countBits(5);

  return 0;
}
