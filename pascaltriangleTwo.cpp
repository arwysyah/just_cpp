#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> getrow(int rowIndex) {
    long value = 1;
    vector<int> response = {};
    for (int x = 0; x < rowIndex + 1; x++) {
      if (x == 0 || x == rowIndex) {
        response.push_back(1);
      } else {
        value = value * ((rowIndex - x) + 1) / x;
        // int x = response[rowIndex - 1] + rowIndex-1;
        response.push_back(value);
      }
    }
    return response;
  }

  void display(vector<int> arg) {

    for (int arr : arg) {
      cout << arr << endl;
    }
  }
};
int main() {
  Solution s;
  vector<int> data = s.getrow(4);
  s.display(data);
  return 0;
}
