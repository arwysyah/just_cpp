#include <iostream>
#include <unordered_map>
#include <stack>
using namespace std;

bool find(char &b, string &s)
{
    cout << b;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == b)
        {
            return 1;
        }
    }
    return 0;
}

class Solution
{
public:
    bool isValid(string &s)
    {
        unordered_map<char, char> myMap;
        myMap = {
            {'(', ')'},
            {'{', '}'},
            {'[', ']'}

        };
        stack<char> myStack;
        // ')'

        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '(')
            {
                myStack.push(')');
            }
            else if (s[i] == '[')
            {
                myStack.push(']');
            }
            else if (s[i] == '{')
            {
                myStack.push('}');
            }
            else if (!myStack.empty() && myStack.top() == s[i])
            {
                myStack.pop();
            }
            else
            {
                return false;
            }
        }

        return myStack.empty();
    }
};

int main()
{
    Solution solution;
    string values = "{()[]()}";
    bool isValid = solution.isValid(values);

    cout << " " << isValid << endl;
    return 0;
}
