#include <iostream>

using namespace std;

class Person
{
private:
    static int cur_id;

public:
    Person()
    {
        cur_id += 1;
    }

    void displayCurrentId()
    {
        cout << cur_id << endl;
    }
};
int Person::cur_id = 0;
int main()
{
    Person b;
    b.displayCurrentId();

    Person d;
    d.displayCurrentId();

    Person c;
    c.displayCurrentId();
    cout
        << "Main " << endl;
    return 0;
}