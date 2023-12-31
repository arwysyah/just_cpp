
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

public:
  vector<string> generateParenthesis(int n) {
    vector<string> result = {};

    createParenthesis(result, "", n, n);
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
  int nOfNumbers = 3;
  vector<string> res = solution.generateParenthesis(nOfNumbers);
  display(res);

  return 0;
}
