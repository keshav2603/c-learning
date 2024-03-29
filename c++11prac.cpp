#include <iostream>
#include <cstdarg>
using namespace std;
// class base final
// class base
// {
//     virtual void show() final
//     {
//     }
// };
// class derive : base
// {
//     void show()
//     {
//     }
// };
class rectangle
{
private:
    int length, breadth;

public:
    rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int sum(int n, ...)
{
    va_list list;
    va_start(list, n);
    int x, s = 0;
    for (int i = 0; i < n; i++)
    {
        x = va_arg(list, int);
        s = s + x;
    }
    va_end(list);
    return s;
}
int main()
{
    cout << sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
    // unique_ptr<rectangle> ptr(new rectangle(10, 5));
    // cout
    //     << ptr->area() << endl;
    // int a = 10;
    // auto f = [&a]()
    // { cout << ++a << endl; };
    // f();
    // f();
    // cout << a;
    // int a = [](int x, int y) -> int
    // { return x + y; }(12, 24);
    // cout << a;
    // int a = [](int x, int y)
    // { return x + y; }(12, 24);
    // cout << a;
    // [](int x, int y)
    // { cout << "sum is  " << x + y << endl; }(12, 24);
    // []()
    // { cout << "hello world" << endl; }();
    // int x = 12;
    // float y = 12.34;
    // decltype(y) r = 123.098;
    // cout << r;
    return 0;
}