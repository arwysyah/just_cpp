// You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer.The digits are ordered from most
// significant to least significant in left - to - right order.The large integer does not contain any leading 0's.

//
//                   Increment the large integer by one and return the resulting array of digits.

// //
//          Example 1 :

//     Input : digits = [ 1, 2, 3 ] Output : [ 1, 2, 4 ] Explanation : The array represents the integer 123. Incrementing by one gives 123 + 1 = 124. Thus,
//             the result should be[1, 2, 4].Example 2 :

//     Input : digits = [ 4, 3, 2, 1 ] Output : [ 4, 3, 2, 2 ] Explanation : The array represents the integer 4321. Incrementing by one gives 4321 + 1 = 4322. Thus,
//             the result should be[4, 3, 2, 2].Example 3 :

//     Input : digits = [9] Output : [ 1, 0 ] Explanation : The array represents the integer 9. Incrementing by one gives 9 + 1 = 10. Thus,
//             the result should be[1, 0].

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// int findLengthOfNumber(int num)
// {

//     int count = 0;
//     if (num < 0)
//     {
//         return 0;
//     }
//     if (num == 0)
//     {
//         return 1;
//     }
//     while (num != 0)
//     {

//         num /= 10;

//         count++;
//     }
//     return count;
// }
class Solution
{
public:
    vector<int> plusOne(vector<int> &digits)
    {
        int n = digits.size();
        int carry = 1;

        for (int i = n - 1; i >= 0 && carry > 0; --i)
        {
            int sum = digits[i] + carry;
            digits[i] = sum % 10;
            carry = sum / 10;
        }

        if (carry > 0)
        {
            digits.insert(digits.begin(), carry);
        }

        return digits;
    }
};

int main()
{

    Solution s;
    vector<int> myVector = {
        9,
        8,
        7,
        6,
        5,
        4,
        3,
        2,
        1,
        0};
    vector<int> result = s.plusOne(myVector);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << endl;
    }
    return 0;
}

// g++ -std = c++ 11 plus_one.cpp &&./ a.out