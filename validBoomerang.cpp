#include  <iostream>
#include <vector>

using namespace std;
class Solution
{
public:
  bool isBoomerang(vector<vector<int>> &points)
  {
    if (points[0] == points[1] || points[1] == points[2] || points[0] == points[2])
    {
      return false; // Not distinct
    }

    if (points[0][0] == points[1][0] && points[0][0] == points[2][0])
    {
      return false;
    }

    // not in a straight line
    float slope1 = (float)(points[1][1] - points[0][1]) / (points[1][0] - points[0][0]);
    float slope2 = (float)(points[2][1] - points[1][1]) / (points[2][0] - points[1][0]);

    return slope1 != slope2;
  };
};
int main()
{
  Solution solution;

  vector<vector<int>> data = {{1, 1}, {2, 3}, {3, 2}};
  vector<vector<int>> arr = {{0, 0}, {1, 0}, {2, 2}};
  bool isValid = solution.isBoomerang(data);
  cout << isValid << endl;
  return 0;
}
