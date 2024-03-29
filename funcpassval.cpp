#include <iostream>
using namespace std;
// int swap(int a, int b)
// {
//     int tem;
//     tem = a; // this is pass by value method
//     a = b;
//     b = tem;
//     cout << a << "  " << b << endl;
// }
// int swap2(int &a, int &b)
// {
//     int tem;
//     tem = a; // this is pass by reffrence method
//     a = b;
//     b = tem;
//     cout << a << "  " << b << endl;
// }
// int swap1(int *a, int *b)
// {
//     int tem;
//     tem = *a; // this is pass by address method
//     *a = *b;
//     *b = tem;
//     cout << *a << " in address function " << *b << endl;
// }
// int *fun()
// {
//     int *p = new int[5];
//     for (int i = 0; i < 5; i++)
//     {
//         p[i] = 5 * i;
//     }
//     cout << p << endl;
//     return p;

// }
// int &fun(int &x)
// {
//     return x;
// }

int main()
{
    // int a = 10;
    // fun(a) = 24;
    // cout << a;

    // int *q = fun();
    // cout << q << endl;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout << q[i] << endl;
    // }

    // int x = 12, y = 24;
    // swap(x, y);
    // cout << x << " this is pass by value " << y << endl;
    // swap1(&x, &y);
    // cout << x << " this is pass by address " << y << endl;
    // swap2(x, y);
    // cout << x << "  " << y;

    return 0;
}