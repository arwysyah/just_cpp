// Given an array of integers nums containing n + 1 integers where each integer is in the range[1, n] inclusive.

//                                                There is only one repeated number in nums,
//     return this repeated number.

//            You must solve the problem without modifying the array nums and uses only constant extra space.

//            Example 1 :

//     Input : nums = [ 1, 3, 4, 2, 2 ] Output : 2 Example 2 :

//     Input : nums = [ 3, 1, 3, 4, 2 ] Output : 3

#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {

        int pointer = 0;

        while (pointer < nums.size())
        {
            int correctIndex = nums[pointer] - 1;
            if (nums[pointer] != nums[correctIndex])
            {
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
            if (x + 1 != nums[x])
            {
                return nums[x];
            };
        }
        return -1;
    }
};

int main()
{
    Solution solution;
    // vector<int> arr = {1, 3, 4, 2, 2};
    vector<int> arr = {3,
                       1,
                       3,
                       4,
                       2};

    int result = solution.findDuplicate(arr);
    cout << result << endl;

    return 0;
}