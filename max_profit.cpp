#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int minimumPrice = prices[0];
        int maximumProfit = 0;
        for (int x = 1; x < prices.size(); x++)
        {
            int cost = prices[x] - minimumPrice;

            maximumProfit = max(cost, maximumProfit);
            cout << maximumProfit << " ";
            minimumPrice = min(minimumPrice, prices[x]);
        }
        cout << endl;
        return maximumProfit;
    }
};

int main()

// 7 1 5 3 6 4  - > 1 --> 7  5 3
// 1 -
// 7
// 4
{

    Solution solution;
    vector<int> prices = {
        7,
        8,
        5,
        3,
        6,
    };

    int result = solution.maxProfit(prices);
    cout << result << endl;
}