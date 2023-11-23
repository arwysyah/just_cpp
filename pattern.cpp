

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

            cout << col << " ";
        }
        cout << endl;
    }
}

void pattern5(int n)
{
    cout << endl;
    // *
    // * *
    // * * *
    // * * * *
    // * * *
    // * *
    // *

    //   number of column are 4;
    //   numbeof row = 7;
    //   row = 2 * n -1
    //   col = row > n ? n -(row-n) : row

    for (int row = 1; row <= (2 * n - 1); row++)
    {
        int columns = row < n ? row : n - (row - n);

        for (int col = 1; col <= columns; col++)
        {

            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n)
{
    cout << endl;
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4
    // 1 2 3
    // 1 2
    // 1
    //   number of column are 4;
    //   numbeof row = 7;
    //   row = 2 * n -1
    //   col = row > n ? n -(row-n) : row

    for (int row = 1; row <= 2 * n - 1; row++)
    {

        int column = row > n ? n - (row - n) : row;
        for (int col = 1; col <= column; col++)
        {

            cout << col << " ";
        }
        cout << endl;
    }
}

void pattern7(int n)
{
    cout << endl;

    //      *
    //    *   *
    //  *   *   *
    // *  *   *  *
    //  *   *   *
    //    *   *
    //      *
    //   number o
    //   number of column are 4;
    //   numbeof row = 7;
    //   row = 2 * n -1
    //   col = row > n ? n -(row-n) : row
    // print space as well

    for (int row = 1; row <= 2 * n - 1; row++)
    {

        int column = row > n ? n - (row - n) : row;
        int spaces = n - column;
        for (int s = 1; s <= spaces; s++)
        {
            cout << " ";
        }
        for (int col = 1; col <= column; col++)
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
    pattern3(4);
    pattern4(4);
    pattern5(4);
    pattern6(4);
    pattern7(4);
    return 0;
}