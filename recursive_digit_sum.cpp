#include <iostream>
using namespace std;

string lenSum(string n)
{
    int lenSum = 0;

    for (char ch : n)
    {
        lenSum += int(ch - '0');
    }

    return to_string(lenSum);
}

int superDigitRec(string n)
{
    if (n.size() == 1)
    {
        return stoi(n);
    }

    return superDigitRec(lenSum(n));
}

int superDigit(string n, int k)
{
    int temp = superDigitRec(n) * k;

    if (temp > 9)
    {
        temp = superDigitRec(to_string(temp));
    }

    return temp;
}

int main()
{

    int result = superDigit("148", 3);
    int result2 = superDigit("9875", 4);
    cout << result << endl;

    return 0;
}
