#include <iostream>
#include <vector>
#include <string>

using namespace std;

int getData(int a)
{
    cout << &a << endl;
    return 4 + a;
};

int main()
{
    vector<string> cars;
    cars.push_back("aaaaa");
    char ch = 'd';
    double d = 234.432;
    printf("%c    %lf   ", ch, d);

    // for (int a = 0; a < cars.size(); a++)
    // {
    //     cout << a + 1 << endl;
    //     cout << cars[a] << endl;
    // }
    cars.push_back("Hekko");

    for (int a = 0; a < cars.size(); a++)
    {
        // cout << cars[a] << endl;
    };
    int b = getData(1);
    // cout << b << "rsult" << endl;
    // cout << cars << endl;
    return 0;
}
