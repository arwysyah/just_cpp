
#include <iostream>
#include <vector>
using namespace std;

int maxSubArraySum(std::vector<int> &a)
{
    int size = a.size();
    int maxSoFar = 0, maxEndingHere = 0;
    for (int i = 0; i < size; i++)
    {
        maxEndingHere = maxEndingHere + a[i];
        if (maxEndingHere < 0)
            maxEndingHere = 0;
        if (maxSoFar < maxEndingHere)
            maxSoFar = maxEndingHere;
    }
    return maxSoFar;
}

int findElement(const int &arg, vector<int> arrs)
{

    int mid;
    int start = 0;
    int target = arg;
    int end = arrs.size() - 1;

    while (start <= end)
    {
        mid = start + (end - start) / 2;

        if (arrs[mid] == target)
        {
            return arrs[mid];
        }
        else
        {
            if (arrs[mid] <= target)
            {
                start = mid + 1;
            }
            else
            {
                end += 1;
            }
        }
    }
    return -1;
    // int b = mid +
    // cout << high << endl;
};

void sorted(
    const int &arg, vector<int> arrs)
{

    int start = 0;
    int end = arrs.size() - 1;

    for (int i = 0; i < end; i++)
    {
        for (int j = 0; j < end; j++)
        {
            // cout << "A :" << arrs[i] << " B " << arrs[j] << endl;
            if (arrs[i] < arrs[j])
            {
                swap(arrs[i], arrs[j]);
            }
        };
    }

    for (int i = 0; i < end; i++)
    {

        cout << "A :" << arrs[i] << endl;
    }
}

int main()
{
    vector<int> temp;
    int arr[9] = {
        1,
        4,
        2,
        7,
        5,
        6,
        15,
        112,
        1

    };

    // 8 6 ,2
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++)
    {
        temp.push_back(arr[i]);
    }

    // int b = findElement(29, temp);
    sorted(29, temp);
    // cout << b << endl;

    return 0;
}