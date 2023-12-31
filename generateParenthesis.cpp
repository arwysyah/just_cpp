
//
//
// Example 1:
//
// Input: n = 3
// Output: ["((()))","(()())","(())()","()(())","()()()"]
//
// Example 2:
//
// Input: n = 1
// Output: ["()"]
//

// LEVEL = MEDIUM

#include <iostream>
#include <vector>

using namespace std;
class Solution {
private:
  void createParenthesis(vector<string> &result, string parenthesis, int left,
                         int right) {
    if (left < 0 || left > right) {
      return;
    }
    if (left == 0 && right == 0) {

      result.push_back(parenthesis);
      return;
    }

    createParenthesis(result, parenthesis + "(", left - 1, right);
    createParenthesis(result, parenthesis + ")", left, right - 1);
  }

  void generateParenthesesOptimumWay(int n, int openCount, int closeCount,
                                     std::string current,
                                     std::vector<std::string> &result) {
    if (openCount == n && closeCount == n) {
      result.push_back(current);
      return;
    }

    if (openCount < n) {
      generateParenthesesOptimumWay(n, openCount + 1, closeCount, current + '(',
                                    result);
    }

    if (closeCount < openCount) {
      generateParenthesesOptimumWay(n, openCount, closeCount + 1, current + ')',
                                    result);
    }
  }

public:
  vector<string> generateParenthesis(int n) {
    vector<string> result = {};
    generateParenthesesOptimumWay(n, 0, 0, "", result);

    // createParenthesis(result, "", n, n);
    return result;
  }
};

void display(vector<string> parenthesisArr) {

  for (auto a : parenthesisArr) {
    cout << a << endl;
  }
}
int main() {

  Solution solution;
  int nOfNumbers = 8;
  vector<string> res = solution.generateParenthesis(nOfNumbers);
  display(res);

  return 0;
}
