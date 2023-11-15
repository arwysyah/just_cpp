#include <iostream>
using namespace std;

string concate(string &str)
{
    // s.erase(s.begin,d.)
    std::string::iterator end_pos = std::remove(str.begin(), str.end(), ' ');
    str.erase(end_pos, str.end());

    cout << str << endl;
    str = str + 'q';
    return str;
}
int main()
{
    string helloWorld = "Hello World";
    string result = concate(helloWorld);
    cout << helloWorld << endl;
    cout << result << endl;

    cout << "after" << helloWorld << endl;
    return 0;
}