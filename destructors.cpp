#include <iostream>
using namespace std;
class test
{
public:
    int *p;
    test()
    {
        p = new int[10];
        cout << "constructor start" << endl;
    }
    ~test()
    {
        delete[] p;
        cout << "memory releasd" << endl;
    }
};
class base
{
public:
    base()
    {
        cout << "constructor of base class" << endl;
    }
    virtual ~base()
    {
        cout << "distructor of base class" << endl;
    }
};
class derive : public base
{
public:
    derive()
    {
        cout << "constructor of derive class" << endl;
    }
    ~derive()
    {
        cout << "distructor of derive class" << endl;
    }
};
int main()
{
    base *p = new derive();
    delete p;
    // derive d;
    // test *t = new test();
    // delete t;
    // test t;
}