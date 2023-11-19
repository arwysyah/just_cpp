#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSumFirstApproach(vector<int> &nums, int target)
{
    for (int i = 0; i < nums.size(); i++)
    {
        int resultA = target - nums[i];
        for (int j = i + 1; j < nums.size(); j++)
        {
            if (resultA == nums[j])
            {
                // cout << nums[i] << " : " << nums[j];
                return {i, j};
            };
        }
    }
    return {};
}

vector<int> twoSumSecondApproach(vector<int> &nums, int target)
{
    unordered_map<int, int> myMaps;
    int subs = 0;
    for (int it = 0; it < nums.size(); it++)
    {
        {
            subs = target - nums[it];

            if (myMaps.find(subs) != myMaps.end())
            {
                std::cout << myMaps[subs] << " : " << it << " index " << endl;
                return {myMaps[subs], it};
            }
            myMaps[nums[it]] = it;
        }
    }

    return {};
}

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 18;
    // vector<int> result = twoSumFirstApproach(arr, target);

    // std::cout << "Using range-based for loop: ";

    vector<int> result2 = twoSumSecondApproach(arr, target);
    for (const auto &element : result2)
    {
        std::cout << element << " ";
    };

    return 0;
}
// nums = [ 2, 7, 11, 15 ], target = 9