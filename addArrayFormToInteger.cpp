#include <iostream>
#include <vector>

using namespace std;


class Solution {

public:
    vector<int> addToArrayForm(std::vector<int>& num, int k) {
    int n = num.size();
    std::vector<int> result;

    int carry = 0;
    for (int i = n - 1; i >= 0 || k > 0; i--) {
        int sum = carry;
        if (i >= 0) {
            sum += num[i];
        }
        if (k > 0) {
            sum += k % 10;
            k /= 10;
        }

        result.insert(result.begin(), sum % 10);
        carry = sum / 10;
    }

    if (carry > 0) {
        result.insert(result.begin(), carry);
    }
 

    return result;
}

};


void display (vector<int> &nums){

for(auto x : nums){
    cout << x << endl;
  }
}
int main (){
 
  vector<int> arrA = {3,8,0,3,0,2,7,0,7,6,4,9,9,1,7,6,6,1,6,4};

  vector<int> arrB = {2,7,4};
  int k2 = 181;
  vector <int> arrC = {9,9,9,9,9,9,9,9,9,9};
  int k3 = 1;

  int k  = 670;
  Solution solution;
  vector<int> result = solution.addToArrayForm(arrA, k);
  cout << "Here is the result "   << endl;
  display(result);
  return 0;
}
