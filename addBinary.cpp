#include <iostream>
#include <bitset>
#include <string>
using namespace std;

class Solution {
public:
   std::string addBinary(std::string a, std::string b) {
    std::string result;
    int carry = 0;

    while (a.length() < b.length()) {
        a = '0' + a;
    }
    while (b.length() < a.length()) {
        b = '0' + b;
    }

    for (int i = a.length() - 1; i >= 0; --i) {
        int bitA = a[i] - '0';
        int bitB = b[i] - '0';

        int sum = bitA ^ bitB ^ carry;
        carry = (bitA & bitB) | (bitB & carry) | (bitA & carry);

        result = char(sum + '0') + result;
    }

    if (carry != 0) {
        result = char(carry + '0') + result;
    }

    return result;
}

};
int main(){

string a = "11";
string b = "1"; 

  Solution solution ;
  string result = solution.addBinary(a, b);
  cout << result << endl;
  return 0;
}

