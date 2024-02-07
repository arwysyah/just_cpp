
// Given a string s, reverse only all the vowels in the string and return it.
//
// The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower
// and upper cases, more than once.
//
//
//
// Example 1:
//
// Input: s = "hello"
// Output: "holle"
//
// Example 2:
//
// Input: s = "leetcode"
// Output: "leotcede"
//
#include <iostream>
#include <string>

using namespace std;

bool isVowel(char chars) {
  string vowels = "aiueoAIUEO";

  return vowels.find(chars) != string::npos;
};
class Solution {

public:
  string reverseVowels(string &s) {

    int left = 0, right = s.size() - 1;

    while (left < right) {

      if (left < right) {
        if (!isVowel(s[left])) {
          left++;
          continue;
        }
      }
      if (left < right) {
        if (!isVowel(s[right])) {
          right--;
          continue;
        }
      }
      if (left < right) {

        char temps = s[left];
        s[left] = s[right];
        s[right] = temps;
      }
      left++;
      right--;
    }
    return s;
  }
};
int main() {

  Solution s = Solution();
  string input = "hello";
  string result = s.reverseVowels(input);
  cout << result << endl;
  return 0;
}
