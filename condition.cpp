
#include <iostream>
using namespace std;
int main()
{
    int n = 1;

    string alphabet[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    if (n < 10 && n > 0)
    {
        cout << alphabet[n - 1] << endl;
    }
    else
    {
        cout << "Greater than 9";
    }

    return 0;
}