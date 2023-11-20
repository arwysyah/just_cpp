#include <iostream>
using namespace std;

class Solution
{

public:
    int lengthOfLastWord(string s)
    {
        int counter = 0;
        int end = s.length();
        int oneEmpty = 0;
        while (end > 0)
        {
            char lastIndex = s[end];
            if (s[--end] != ' ')
            {
                counter++;
            }
            else if (counter > 0)
            {
                return counter;
            }
        }
        cout << counter << endl;

        return counter;
    };
};
int main()
{
    Solution solution;
    int res = solution.lengthOfLastWord("Hello World");
    cout << "response " << res << endl;
    // cout << res << endl;
    // Solution solution2;
    // solution2.lengthOfLastWord("   fly me   to   the moon  ");
    return 0;
}