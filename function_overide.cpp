#include <iostream>
#include <cmath>
using namespace std;

// class parent
// {
// public:
//     virtual void fun() = 0;
//     // {
//     // cout << "function of parent" << endl;
// };
// class child : public parent
// {
// public:
//     void fun()
//     {
//         cout << "function of child" << endl;
//     }
// };
// int main()
// {
//     // parent ne();
//     parent *p = new child();
//     // p->fun();
//     // parent p();
//     // p.fun();

//     // parent *p = new child();
//     // p->fun();
//     // parent p1;
//     // p1.fun();
//     // child c1;
//     // c1.fun();
// }
class shape
{
public:
    virtual float area() = 0;
    virtual float perimeter() = 0;
};
class rectangle : public shape
{
    float length, breath;

public:
    rectangle(float len, float bre)
    {
        length = len;
        breath = bre;
    }
    float area() override
    {
        return length * breath;
    }
    float perimeter() override
    {
        return 2 * (length + breath);
    }
};
int main()
{
    shape *s = new rectangle(12, 23);
    cout << "area : " << s->area() << endl;
    cout << "perimeter" << s->perimeter() << endl;
    return 0;
}