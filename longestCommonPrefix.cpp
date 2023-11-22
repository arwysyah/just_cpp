#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
       string longestCommonPrefixMostGoodApproch(vector<string> &strs)

    {

        sort(strs.begin(), strs.end());

        string firstIndex = strs[0];
        string prefix = "";
        string lastIndex = strs[strs.size() - 1];
        for (int i = 0; i < firstIndex.size(); i++)
        {
            if (firstIndex[i] == lastIndex[i])
            {
                prefix += firstIndex[i];
            }
            else
            {
                return prefix;
            }
        }
        return prefix;
    };
};

int main()
{

    Solution solution;
    vector<string> strs = {
        "cars",
        "car",
        "ccw",
    };
    string result = solution.longestCommonPrefixMostGoodApproch(strs);
    cout << "ans : " << result << endl;

    // string result = solution.longestCommonPrefix(strs);
    // cout << " : " << result << endl;
    return 0;
}