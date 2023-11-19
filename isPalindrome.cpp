#include <iostream>

using namespace std;

bool isPalindrome(int &x)
{

    string arg = to_string(x);
    size_t lenOfArg = arg.length();

    int pointerA = 0;
    int pointerB = lenOfArg - 1;
    while (pointerA <= pointerB)
    {
        if (arg[pointerA] == arg[pointerB] && pointerB - pointerA == 1)
        {
            return true;
        }

        if (arg[pointerA] == arg[pointerB])
        {

            if (pointerA == pointerB)
            {
                return true;
            }
            pointerA++;
            pointerB--;
        }
        else
        {
            return false;
        };
    }

    return false;

    // 12 ms
};
bool isPalindromeSecondApproach(int x)
{
    string str = to_string(x);

    int left = 0, right = str.length() - 1;
    while (left < right)
    {
        if (str[left] != str[right])
        {
            return false;
        }
        left++;
        right--;
    }

    return true;

    // 7 ms
}

int main()
{
    int num = 101;
    bool result = isPalindromeSecondApproach(num);
    cout << result << endl;
    return 0;
}

// g++ isPalindrome.cpp &&./ a.out

// 1->1 = 0, 3 2 - > 1
