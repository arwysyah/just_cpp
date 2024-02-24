// Given a string s, find the length of the longest
// substring
// without repeating characters.
//
// Example 1:
//
// Input: s = "abcabcbb"
// Output: 3
// Explanation: The answer is "abc", with the length of 3.
//
// Example 2:
//
// Input: s = "bbbbb"
// Output: 1
// Explanation: The answer is "b", with the length of 1.
//
// Example 3:
//
// Input: s = "pwwkew"
// Output: 3
// Explanation: The answer is "wke", with the length of 3.
// Notice that the answer must be a substring, "pwke" is a subsequence and not a
// substring.
//
//
//
// Constraints:
//
//
#include <iostream>
using namespace std;

class Solution {

public:
  int lengthOfLongestSubstring(string s) {
    int max = 0;
    for (int x = 0; x < s.size(); x++) {
      string currentString = "";
      for (int y = x; y < s.size(); y++) {
        if (currentString.find(s[y]) != string::npos) {
          break;
        }

        currentString += s[y];
        // if (currentString.size() > max) {
        //   max = currentString.size();
        // }
        max = std::max(max, y - x + 1);
        // cout << max << endl;
      }
    }
    return max;
  }
};
int main() {
  string s = "abcabcbb";

  Solution solution;
  int result = solution.lengthOfLongestSubstring(s);
  cout << result << endl;

  return 0;
}
