// 268. Missing Number
//     Easy 11K 3.2K Companies
//         Given an array nums containing n distinct numbers in the range[0, n],
//     return the only number in the range that is missing from the array.

//            Example 1 :

//     Input : nums = [ 3, 0, 1 ] Output : 2 Explanation : n = 3 since there are 3 numbers,
//             so all numbers are in the range[0, 3].2 is the missing number in the range since it does not appear in nums.Example 2 :

//     Input : nums = [ 0, 1 ] Output : 2 Explanation : n = 2 since there are 2 numbers,
//             so all numbers are in the range[0, 2].2 is the missing number in the range since it does not appear in nums.Example 3 :

//     Input : nums = [ 9, 6, 4, 2, 3, 5, 7, 0, 1 ] Output : 8 Explanation : n = 9 since there are 9 numbers,
//             so all numbers are in the range[0, 9].8 is the missing number in the range since it does not appear in nums.

// 3,0, 1
// check if its three are equal to n => yes -> pointer ++ swap(pointer , value/correct index)
// move to 0 -> 0 are in the  index  0 ? no -> swap it (0, with current index/pointer)
// pointer = 1 = > swap([vector], pointer, correct-index)

// USING CYCLE SORT

// o(N)

// 1. we should find the number that missing  value =index
// first one look into the index , sort it

// if the element in index equal to n, increment pointer and dont swap it ,
// but if it not check if the position are correvct by checking the value of element = index and swap it

#include <iostream>
#include <vector>
using namespace std;

void swap(vector<int> &nums, int &first, int &second)
{

    int temps = nums[first];
    nums[first] = nums[second];
    nums[second] = temps;
};

class Solution
{
public:
    int missingNumber(vector<int> &nums)

    {

        int pointer = 0;
        while (pointer < nums.size())
        {
            int correctIndex = nums[pointer];
            // check if arr[pointer] are equal to the position it should be
            if (nums[pointer] < nums.size() && nums[pointer] != nums[correctIndex])
            {
                swap(nums, pointer, correctIndex);
            }
            else
            {
                pointer++;
            }
        }
        for (int i = 0; i < nums.size(); i++)
        {
            // cout << nums[i] << endl;

            if (i != nums[i])
            {
                return i;
            }
        }

        return nums.size();
    }
};
int main()
{
    Solution solution;

    vector<int> arr = {
        3,
        0,
        2,
        1,
        4};
    int missing = solution.missingNumber(arr);
    cout << missing << endl;

    return 0;
};
