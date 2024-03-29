#include <iostream>
using namespace std;
class test
{
private:
    int a, *p;

public:
    test(int x)
    {
        a = x;
        p = new int[a];
    }
    test(test &ex)
    {
        a = ex.a;
        p = new int[a];
    }
    ~test()
    {
        delete[] p;
    }
};
class rectangle
{
private:
    int length, breath;

public:
    rectangle(int l = 1, int b = 1)
    {
        set_length(l);
        set_breath(b);
    }
    rectangle(rectangle &rect)
    {
        length = rect.length;
        breath = rect.breath;
    }
    void set_length(int l)
    {
        if (l >= 0)
        {
            length = l;
        }
        else
        {
            cout << "the value entered is wrong we are setting default value as 0" << endl;
            length = 1;
        }
    }
    void set_breath(int b)
    {
        if (b >= 0)
        {
            breath = b;
        }
        else
        {
            cout << "the value entered is wrong we are setting default value as 0" << endl;
            breath = 1;
        }
    }
    void area()
    {
        cout << length * breath << endl;
    }
    void perameter();
};
void rectangle::perameter()
{

    cout << 2 * (length + breath) << endl;
}
int main()
{
    rectangle r(12, 34);
    r.perameter();
}
