#include <iostream>


using namespace std;
class Solution {
  public:
  int smallestEvenMultiple (const int &n){
    int x =  n%2 != 0? 2 * n : n;      
    return x;
  }

}
;
int main (){
 Solution solution ;
  int res = solution.smallestEvenMultiple(6);
  cout << res << endl;
  return 0;
}
