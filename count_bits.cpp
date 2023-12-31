#include <cmath>
#include <iostream>

#include <vector>

using namespace std;

class Solution {
private:
  void display(vector <int> arr ){
    for(auto x :arr){
      cout << x << endl;
    }
  }
    int countSetBits(int num) {
        // Initialize a counter for counting set bits
        int count = 0;

        // Continue the loop until all set bits are counted
        while (num > 0) {
            // Increment the counter for each set bit
            count++;

            // Turn off the rightmost set bit
            num = num & (num - 1);
        }

        return count;
    };
public:
  vector<int> countBits(int n) {

    vector<int> res = {

    };
    int counter = 0;
    for (int x = 0; x <= n; x++) {
      int reminder = 0;

      int xDuplicate = x;
      while (xDuplicate > 0) {
        reminder = xDuplicate % 2;
        xDuplicate = xDuplicate / 2;
        if (reminder == 1) {
          counter++;
        }
      }
      res.push_back(counter);
      counter = 0;
    }

display(res);

    return res;
  }
 vector<int> countBitsOptimumWay(int n) {
        vector<int> res(n + 1, 0);

        for (int i = 1; i <= n; i++) {
            // Counting set bits using Brian Kernighan's Algorithm
            res[i] = res[i & (i - 1)] + 1;
        }

  display(res); 
        return res;
    }

     vector<int> countBitsWithBrianKernighan(int n) {
        // Initialize a vector to store the count of set bits for each number from 0 to n
        vector<int> res(n + 1, 0);

        // Iterate from 1 to n
        for (int i = 1; i <= n; i++) {
            // Use Brian Kernighan's Algorithm to count set bits
            res[i] = countSetBits(i);
        }
    display(res);

        return res;
    }

};
int main() {

  Solution solution;

  vector<int> result = solution.countBitsWithBrianKernighan(5);

  return 0;
}
