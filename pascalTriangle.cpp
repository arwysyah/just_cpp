#include <iostream>
#include <vector>
using namespace std;

class Solution
{

public:
    vector<vector<int>> generate(int &numsRow)

    {
        std::vector<std::vector<long long>> result(numsRow);
        int counter = 0;
        for (int row = 0; row < numsRow; row++)
        {
            result[row].resize(row + 1); //

            for (int col = 0; col <= row; col++)
            {

                if (col == row || col == 0)
                {
                    result[row][col] = 1;
                }
                else
                {
                    result[row][col] = result[row - 1][col - 1] + result[row - 1][col];
                }
            };
        }

        return {result};
    }
};

int main()
{

    Solution solution;

    int nums = 5;
    vector<vector<int>> result = solution.generate(nums);
    for (int x = 0; x < result.size(); x += 1)
    {
        for (auto z : result[x])
        {
            cout << z << " ";
        }
        cout << endl;
    }
}

// _ _ x _ _
// _ x _ x _
// _ x x x _
//  x x x x