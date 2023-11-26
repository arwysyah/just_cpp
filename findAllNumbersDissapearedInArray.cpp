
//

//         Given an array nums of n integers where nums[i] is in the range[1, n],
//     return an array of all the integers in the range[1, n] that do not appear in nums.

//            Example 1 :

//     Input : nums = [ 4, 3, 2, 7, 8, 2, 3, 1 ] Output : [ 5, 6 ] Example 2 :

//     Input : nums = [ 1, 1 ] Output : [2]

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        vector<int> result = {};

        int pointer = 0;
        while (pointer < nums.size())
        {
            // find correctIndex ?
            // since the lowest element are 1 ==> value - 1 to make its 0 then equal to first index which started from 0

            int correctIndex = nums[pointer] - 1;

            if (nums[pointer] != nums[correctIndex])
            {
                // cout << nums[pointer] << endl;

                int temp = nums[pointer];
                nums[pointer] = nums[correctIndex];
                nums[correctIndex] = temp;
            }
            else
            {
                pointer++;
            }
        }

        for (int x = 0; x < nums.size(); x++)
        {

            if (nums[x] != x + 1)
            {
                result.push_back(x + 1);
            }
        }
        return result;
    }
};

int main()
{

    Solution solution;

    // vector<int> arr = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> arr = {1, 1};
    vector<int> result = solution.findDisappearedNumbers(
        arr);
    for (auto x : result)
    {
        cout << x;
    }
    return 0;
}