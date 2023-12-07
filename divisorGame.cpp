#include <iostream>

using namespace std;

class Solution
{
public:
  bool divisorGame(const int &x)
  {
    return x % 2 == 0;
  }
};
int main()
{
  Solution solution;
  int n = 4;

  bool result = solution.divisorGame(n);

  cout << result << endl;
  return 0;
}
