
#include <iostream>
#include <vector>

// Given an input string s, reverse the order of the words.

//                                  A word is defined as a sequence of non -
//                                  space characters.The words in s will be separated by at least one space.

//                                  Return a string of the words in reverse order concatenated by a single space.

//                                  Note that s may contain leading or
//                              trailing spaces or multiple spaces between two words.The returned string should only have a single space separating the words.Do not include any extra spaces.

using namespace std;
class Solution
{
public:
    string reverseWords(string &s)
    {

        string currentWord;
        vector<string> words;

        for (char c : s)
        {
            if (c != ' ')
            {
                currentWord += c;
            }
            else
            {
                if (!currentWord.empty())
                {
                    words.push_back(currentWord);
                    currentWord.clear();
                }
            }
            s.clear();
        }

        if (!currentWord.empty())
        {
            words.push_back(currentWord);
        }

        for (const auto &word : words)
        {
            cout << word << endl;
        }
        for (int x = words.size() - 1; x >= 0; x--)
        {

            if (x == 0)
            {
                s += words[x];
            }
            else
            {
                s += words[x] + " ";
            }
        }

        return s;
    }
};
int main()
{
    Solution solution;
    string word = "  hello world  ";

    string result = solution.reverseWords(word);
    cout << result << endl;

    return 0;
}