#include <iostream>

// using namespace std;
// class Box
// {
//     // private:

// public:
//     int l, b, h;
//     Box()
//     {
//         l = 0;
//         b = 0;
//         h = 0;
//     }

//     Box(int length, int breadth, int height)
//     {
//         l = length;
//         b = breadth;
//         h = height;
//     }

//     Box(Box *B)
//     {
//         l = B->l;
//         b = B->b;
//         h = B->h;
//     }

//     int getLength()
//     {
//         return l;
//     };

//     int getBreadth()
//     {
//         return b;
//     };
//     int getheight()
//     {
//         return h;
//     };

//     int CalculateVolume()
//     {
//         return getLength() * getheight() * getBreadth();
//     }
// };

// bool isBoxABigger(Box *a, Box *b)
// {
//     if (a->l < b->l)
//     {
//         return true;
//     }
//     else if (a->b < b->b && a->l == b->l)
//     {
//         return true;
//         /* code */
//     }
//     else if (a->h < b->h && a->b < b->b && a->l == b->l)
//     {
//         return true;
//     }

//     else
//         return false;
// };

// int main()
// {

//     Box b1;
//     Box b2(2, 3, 4);
//     bool x = isBoxABigger(&b1, &b2);
//     cout << x << endl;

//     // cout << b1.getheight() << endl;
//     // cout << b2.getheight() << endl;
//     // cout << b2.CalculateVolume() << endl;

//     // cout << b2;
//     cout << b2;
// }

// This is the correct solution for that question
// include

using namespace std;
class Box
{
private:
    int l, b, h;

public:
    Box() : l(0), b(0), h(0) {}
    Box(int l, int b, int h) : l(l), b(b), h(h) {}
    Box(const Box &t) : l(t.l), b(t.b), h(t.h) {}
    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }

    long long CalculateVolume() { return static_cast<long long>(l) * b * h; }

    bool operator<(const Box &other)
    {
        if (l < other.l)
            return true;
        if (b < other.b && l == other.l)
            return true;
        if (h < other.h && b == other.b && l == other.l)
            return true;
        return false;
    }

    friend ostream &operator<<(ostream &out, const Box &B)
    {
        out << B.l << " " << B.b << " " << B.h;
        return out;
    }
};
void check2()
{
    int n;
    cin >> n;
    Box temp;
    for (int i = 0; i < n; i++)
    {
        int type;
        cin >> type;
        if (type == 1)
        {
            cout << temp << endl;
        }
        else if (type == 2)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            temp = NewBox;
            cout << temp << endl;
        }
        else if (type == 3)
        {
            int l, b, h;
            cin >> l >> b >> h;
            Box NewBox(l, b, h);
            if (NewBox < temp)
            {
                cout << "Lesser\n";
            }
            else
            {
                cout << "Greater\n";
            }
        }
        else if (type == 4)
        {
            cout << temp.CalculateVolume() << endl;
        }
        else if (type == 5)
        {
            Box NewBox(temp);
            cout << NewBox << endl;
        }
    }
}
int main()
{
    check2();
    return 0;
}