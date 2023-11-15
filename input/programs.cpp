
// C++ program to demonstrate the
// cin object

// Output Format
// For each pair of  and  values (i.e., for each query), print a single integer that denotes the element located at index  of the array referenced by . There should be a total of  lines of output.
// Sample Input
// 2 2
// 3 1 5 4
// 5 1 2 8 9 3
// 0 1
// 1 3
// Sample Output
// 5
// 9
// Explanation
// The diagram below depicts our assembled Sample Input:
// variable-length-arrays.png
// We perform the following  queries:
// Find the array located at index , which corresponds to . We must print the value at index  of this array which, as you can see, is .
// Find the array located at index , which corresponds to . We must print the value at index  of this array which, as you can see, is .

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int len1, len2 = 0;
    cin >> len1 >> len2;

    vector<vector<int>> arr;
    int k = 0;

    for (int i = 0; i < len1; i++)
    {
        arr.push_back(vector<int>());
        cin >> k;
    };
    cout << k << endl;

    return 0;
}