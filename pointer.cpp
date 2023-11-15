#include <iostream>

using namespace std;
// void update(int *a, int *b)
// {

//     int &addressA = *a;
//     int &addressB = *b;
//     cout << *a << endl;
//     int pointerB = *b;
//     int pointerA = *a;
//     addressA = abs(pointerA + pointerB);
//     addressB = abs(pointerA - pointerB);
//     cout << *b << endl;
//     cout << *a << "A: " << addressA << "B :" << addressB << endl;

//     // Complete this function
// }

// int main()
// {
//     int a, b;
//     a = 4;
//     b = 5;
//     int *pa = &a, *pb = &b;

//     cout << "*pa = " << *pa << "  *pb: " << *pb << " A =  " << &a << endl;

//     update(pa, pb);
//     // printf("%d\n%d", a, b);
//     cout << "PA = " << *pa << "  PB : " << *pb << " A =  " << &a << endl;
//     return 0;
// }

int main()
{
    string a = "abc";
    string b = "def";
    string c = a + b; // c = "abcdef".

    char s = a[0];
    cout << "*S = " << s << endl;
    cout << "A = " << a << endl;
    char s = a[0];
    a[0] = b[0];
    b[0] = s;

    // char b[0]= *s;
    cout << "*S' = " << a << endl;
    cout << "A' = " << b << endl;

    // c[0] = "b";
    cout << c << endl;

    return 0;
}