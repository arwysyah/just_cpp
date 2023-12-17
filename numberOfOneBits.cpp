#include <cstdint>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;
class Solution {
public:
  int hammingWeight(uint32_t n) {

    int count = 0;
    while (n) {
      count += n & 1;
      n >>= 1;
    }

    return count;
  }
};

int main() {

  Solution solution;
  int result = solution.hammingWeight(00000000000000000000000000001011);

  cout << result << endl;
  return 0;
}
