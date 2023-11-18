
#include <iostream>
using namespace std;

int main()
{

    int len;
    int type;
    cin >> len;
    int marks[7];
    for (int i = 0; i < len; i++)
    {
        cin >> marks[i];
        // marks[i] = type;
        // cout << type;
    }

    for (int x = 0; x < 7; x++)
    {
        cout << "enfl" << marks[x] << endl;
    }

    cout << len << " " << endl;
    return 0;
}

// g++ maps_stl.cpp &&./ a.out < input / maps_stl.txt