#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

class Solution {
public:
    vector<string> findWords(vector<string>& words) {

    string firstChar = "qwertyuiop";
    string secondChar = "asdfghjkl";
    string thirdChar = "zxcvbnm";
    string all_words = firstChar + secondChar + thirdChar;
  vector <string> res {};
int firstCharLen = firstChar.size()-1;
    int limitSecondChar = firstCharLen+secondChar.size()-1;
    int limitThirdChar = limitSecondChar + thirdChar.size()-1;
    int currentKeyBoard = 0;
    cout << firstCharLen << " : " << limitSecondChar << " : " << limitThirdChar;




    for(int x= 0 ; x<words.size();){
      string element = words[x];
      char focused = element[0];
      string rowKeyBoard = "";
      int pos = all_words.find(tolower(focused));
      if(pos >=0 && pos <= firstCharLen){
        rowKeyBoard = firstChar;
      }  else if(pos > firstCharLen && pos < limitSecondChar){
        rowKeyBoard= secondChar;
      }else{
        rowKeyBoard = thirdChar;
      
      }
      cout << rowKeyBoard << endl;
      int start = 0 ;
      while (start < element.size()){
        size_t founded = rowKeyBoard.find(tolower(element[start]));

        if(founded != string::npos){
          start++;
        }else{
x++;
          break;
        }
      if (start == element.size()) {
          res.push_back(element);
            // std::cout << "Processed word: " << element << std::endl;
            x++; // Move to the next word
        }
        
      }

    

    }
 
    return res ;      
} 
};
int main (){
  Solution solution ;
vector <string> res = {
    "qwee"
  };
    vector <string> result = solution.findWords(res);
  for(int x = 0 ;x<result.size();x++){
    cout << result[x] << endl;
  }
  return 0;

}
   
