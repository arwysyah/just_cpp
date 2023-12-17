#include <iostream>
#include <vector>

using namespace std;

class Solution {

public:
  string getAchievable(string &arg) {

    for (int x = 0; x < arg.size(); x++) {
      std::string substring = arg.substr(x, 2);
      cout << substring << endl;
    }

    return "a";
  }
};

int main() {

  Solution solution;
  string dataA = "accaab";
  string result = solution.getAchievable(dataA);
  cout << "Hello " << endl;
  return 0;
}
