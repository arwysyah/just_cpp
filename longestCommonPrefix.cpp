#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

void swapLongest(string &longestPrefix, string &nextPrefix)
{
    string temp;
    for (int x = 0; x < nextPrefix.size(); x += 1)
    {
        if (longestPrefix[x] == nextPrefix[x])
        {
            temp += longestPrefix[x];
        }
        else
        {
            break;
        }
    }
    longestPrefix = temp;
};
class Solution
{
public:
    string longestCommonPrefixBruteforceHorizontal(vector<string> &strs)

    {

        // slower solution
        string firstIndex = strs[0];

        for (int x = 1; x < strs.size(); x++)
        {
            swapLongest(firstIndex, strs[x]);
        }
        return firstIndex;
    };

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
        "ccccw",
    };
    // string result = solution.longestCommonPrefixMostGoodApproch(strs);
    // cout << "ans : " << result << endl;

    // string result = solution.longestCommonPrefix(strs);
    // cout << " : " << result << endl;

    string result = solution.longestCommonPrefixBruteforceHorizontal(strs);
    cout << result << endl;
    return 0;
}