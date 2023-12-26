#include <cstddef>
#include <iostream>
#include <vector>

using namespace std;
class Solution {

public:
  void reverseString(vector<char> &s) {

    size_t size = s.size() - 1;
    vector<char> cx = s;
    for (int x = 0; x <= size; x += 1) {
      s[x] = cx[size - x];
      // s[x] = s[size - x];
    }
  }

  void reverseString2(vector<char> &s) {
    int left = 0;
    int right = s.size() - 1;

    while (left < right) {
      swap(s[left], s[right]);

      left++;
      right--;
    }
  }
};

void display(vector<char> arr) {
  for (auto x : arr) {
    cout << x << endl;
  }
}
int main() {

  Solution solution;
  vector<char> chars = {'h', 'e', 'l', 'l', 'o'};

  solution.reverseString2(chars);
  display(chars);

  return 0;
}
