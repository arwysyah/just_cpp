#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    string longestCommonPrefix(vector<string> &strs)

    {
        // vertical method

        string firstIndex = strs[0];
        string prefix = "";

        for (int c = 0; c < firstIndex.size(); c++)
        {

            char character = firstIndex[c];

            for (int x = 1; x < strs.size(); x++)
            {
                cout << character << " " << strs[x][c] << endl;
                // character strs[x][x]
                // "cars",
                // "car",
                // "cccw",
                // c c
                // c c
                // a a
                // a c

                if (character != strs[x][c])
                    return prefix;
            }

            prefix += character;
        }

        return prefix;
    };
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
        "carss",
        "car",
        "cccw",
    };
    // string result = solution.longestCommonPrefixMostGoodApproch(strs);
    // cout << "ans : " << result << endl;

    string result = solution.longestCommonPrefix(strs);
    cout << " : " << result << endl;
    return 0;
}