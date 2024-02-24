#include <iostream>
#include <limits>
using namespace std;
class Solution {
public:
  int reverse(int &x) {

    int start = 0;
    while (x != 0) {
      if (x > numeric_limits<int>::max() / 10 ||
          (x == std::numeric_limits<int>::max() / 10 && start > 7)) {
        return 0;
      }
      if (x < std::numeric_limits<int>::min() / 10 ||
          (x == std::numeric_limits<int>::min() / 10 && start < -8)) {
        return 0;
      }

      int modulo = x % 10;
      x = x / 10;
      start = start * 10 + modulo;
    }
    return start;
  }
};

int main() {
  int numbers = 1423241;

  Solution solution;
  int reversed = solution.reverse(numbers);
  cout << reversed << endl;
  return 0;
}
