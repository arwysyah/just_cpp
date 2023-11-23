

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
    // first row have 4 col
    // second row has 4 col
    // third row has 4 col
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
void pattern3(int n)
{
    cout << endl;

    // * * * *
    // * * *
    // * *
    // *
    // first row have 4 col
    // second row has 3 col
    // third row has 2 col
    // four row has 1 col;

    for (int row = 1; row <= n; row++)
    {

        for (int col = n; col >= row; col--)
        {

            cout << "* ";
        }
        cout << endl;
    }
}

void pattern4(int n)
{
    cout << endl;

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // first row have 4 col  1
    // second row has 3 col  1 - > 2
    // third row has 2 col
    // four row has 1 col;

    for (int row = 1; row <= n; row++)
    {

        for (int col = 1; col <= row; col++)
        {

            cout << col;
        }
        cout << endl;
    }
}

int main()
{

    pattern1(4);
    pattern2(4);
    pattern3(4);
    pattern4(4);
    return 0;
}