#include <iostream>
#include <vector>

// Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

//                                                                                                            Example 1 :

//     Input : haystack = "sadbutsad",
//             needle = "sad" Output : 0 Explanation : "sad" occurs at index 0 and 6. The first occurrence is at index 0, so we return 0. Example 2 :

//     Input : haystack = "leetcode",
//             needle = "leeto" Output : -1 Explanation : "leeto" did not occur in "leetcode", so we return -1.

using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {

        int lengthOfNeedle = needle.size();
        int lengthOfHaystack = haystack.size();
        int pointer = 0;
        while (pointer < lengthOfHaystack)
        {
            string currentString = haystack.substr(pointer, lengthOfNeedle);
            if (currentString == needle)
            {
                return pointer;
            }
            pointer++;
        }

        return -1;
    }
};
int main()
{
    // string haystack = "sadbutsad";
    // string needle = "sad";
    // string haystack = "leetcode";
    // string needle = "leeto";
    // string haystack = "a";
    // string needle = "a";
    string haystack = "abc";
    string needle = "c";

    Solution solution;
    int result = solution.strStr(haystack, needle);
    cout << result;

    return 0;
}