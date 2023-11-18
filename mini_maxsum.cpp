#include <iostream>
#include <vector>
using namespace std;

// Given five positive integers, find the minimum and maximum values
// that can be calculated by summing exactly four of the five integers.
// Then print the respective minimum and maximum values as a single line of two space-separated long integers.
// Example
// The minimum sum is  and the maximum sum is . The function prints
// 16 24

void miniMaxSum(vector<int> arr)
{
    long long max = arr[0];
    long long min = arr[0];
    long long total = 0;

    for (long long i = 0; i < arr.size(); i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        };
        if (arr[i] > max)
        {
            max = arr[i];
        };
        total += arr[i];
    }

    cout << total - max << " " << total - min << endl;
}
int main()
{
    vector<int> v = {12, 1, 2, 3, 4, 100};
    miniMaxSum(v);

    return 0;
}
// g++ - std = c++ 11 mini_maxsum.cpp &&./ a.out  CPP 11