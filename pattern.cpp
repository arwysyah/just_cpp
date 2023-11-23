

#include <iostream>
using namespace std;

void pattern2(int n)
{

    // *
    // * *
    // * * *
    // * * * *
    // first row have 1 col
    // second row has 2 col
    // third row has 3 col
    // four row has 4 col;

    cout << endl;
    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= row; col++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}

void pattern1(int n)
{
    cout << endl;

    // * * * *
    // * * * *
    // * * * *
    // * * * *
    // first row have 1 col
    // second row has 2 col
    // third row has 3 col
    // four row has 4 col;

    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= n; col++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{

    pattern1(4);
    pattern2(4);
    return 0;
}