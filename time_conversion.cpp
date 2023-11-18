// Given a time in - hour AM / PM format, convert it to military(24 - hour) time.Note : -12 : 00 : 00AM
// on a 12 - hour clock is 00 : 00 : 00 on a 24 - hour clock.- 12 : 00 : 00PM on a 12 - hour clock is 12 : 00 : 00 on a 24 -
//  hour clock.Example

//   - hour clock format(i.e. : or).Constraints All input times are valid Sample I

#include <iostream>
using namespace std;
string timeConversion(string &s)
{
    string b = s;
    size_t length = b.length();
    string firstTwoIndex = string(1, b[0]) + string(1, b[1]);
    string pm_format = string(1, b[length - 2]) + string(1, b[length - 1]);
    bool isEqual = pm_format == "PM";
    int calculation = 12;
    char charAtIndex1 = b[1];

    // Convert the character to its corresponding integer value
    int index = int(charAtIndex1) - '0';
    string sd = "00";

    if (isEqual == 1)
    {
        if (string(1, b[0]) == "0")
        {
            calculation = calculation + index;
            b.replace(0, 2, to_string(calculation));
        }
        else if (firstTwoIndex == "12")
        {
        }

        else
        {
            int index2 = stoi(firstTwoIndex);
            calculation = calculation + index2;
            b.replace(0, 2, to_string(calculation));
        }
    }
    if (firstTwoIndex == "12" && pm_format == "AM")
    {
        b.replace(0, 2, "00");
    }

    b.replace(length - 2, 2, "");
    return b;
};

int main()
{

    string s = "12:45:54PM";

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}

// g++ time_conversion.cpp &&./ a.out

// stupid answer