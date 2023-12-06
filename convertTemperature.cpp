#include <iostream>
#include <vector>

using namespace std;

class Solution {

  public:
  vector<double> convertTemperature(double &celcius){
    double kelvin = 273.15 + celcius;
    double fahrenheit = celcius * 1.80 + 32.00;
    return {kelvin,fahrenheit};
  }

} 
;
int main (){
  Solution solution;
  double c = 36.50;
  vector <double> res = solution.convertTemperature(c);
  for(auto i: res){
    cout << i << endl; 
  }
  return 0;
}
