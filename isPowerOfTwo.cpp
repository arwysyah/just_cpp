#include <iostream>
using namespace std;
class Solution {

public:
  int isPowerOfTwo(int x) {

    if (x == 1) {
      return true;
    }
    int currentNumber = x;
    int isFactorial = currentNumber % 2;
    /*  cout << "Factorial " << isFactorial << endl; */
    while (currentNumber / 2 > 0 && currentNumber % 2 == 0) {
      currentNumber = currentNumber / 2;
      cout << "Current " << currentNumber << endl;
      if (currentNumber == 1) {
        return true;
      }
    }

    return 0;
  }
};
int main() {

  Solution solution;
  int number1 = 1;
  int number2 = 16;
  int number3 = 3;
  int result = solution.isPowerOfTwo(0);
  cout << result << " Result" << endl;

  return 0;
}
