
// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

//                                                                                            Example 1 :

//     Input : nums = [ 1,4, 2, 3, 1 ] Output : true Example 2 :

//     Input : nums = [ 1, 2, 3, 4 ] Output : false Example 3 :

//     Input : nums = [ 1, 1, 1, 3, 3, 4, 3, 2, 4, 2 ] Output : true

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void swap(vector<int> &arr, int first, int second)
{
    int temp = arr[first];
    arr[first] = arr[second];
    arr[second] = temp;
}

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {

        unordered_map<int, int> myMaps;

        for (int x = 0; x < nums.size(); x++)
        {
            if (myMaps.find(nums[x]) != myMaps.end())
            {

                myMaps[nums[x]]++;
            }
            else
            {
                myMaps[nums[x]] = 1;
            }
        }

        for (const auto &pair : myMaps)
        {
            if (pair.second > 1)
                return true;
        }

        return false;
    };
};
int main()
{
    vector<int> res = {
        1,
        2,
        3,
    };

    Solution solution;

    bool isContain = solution.containsDuplicate(res);
    cout << isContain << "" << endl;

    return 0;
}