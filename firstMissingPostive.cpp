#include <iostream>
#include <vector>

using namespace std;
// HARD

// Given an unsorted integer array nums, return the smallest missing positive integer.

//     You must implement an algorithm that runs in
//     O(n)
// time and uses O(1) auxiliary space.

// sort ==> and find the index that does not have corect value;

class Solution
{
public:
    int firstMissingPositive(vector<int> &nums)
    {

        int pointer = 0;

        while (pointer < nums.size())
        {
            int correctIndex = nums[pointer];
            if (nums[pointer] > 0 && nums[pointer] != nums[correctIndex])
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
            if (x != nums[x])
            {
                return x;
            };
        }
        return nums.size();
    }
};

int main()
{
    Solution solution;
    // vector<int> arr = {1, 2, 0};
    vector<int> arr = {3, 4, -1, 1};
    // vector<int> arr = {7,
    //                    8,
    //                    9,
    //                    11,
    //                    12};

    int result = solution.firstMissingPositive(arr);
    cout << result << endl;

    return 0;
}