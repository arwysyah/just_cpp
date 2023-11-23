

#include <iostream>
using namespace std;

void pattern(int n)
{

    // *
    // * *
    // * * *
    // * * * *
    // first row have 1 col
    // second row has 2 col
    // third row has 3 col
    // four row has 4 col;

    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= row; col++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{

    pattern(4);
    return 0;
}