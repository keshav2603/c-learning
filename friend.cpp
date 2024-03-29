#include <iostream>
using namespace std;
class keshav
{
private:
    int a = 10;

protected:
    int b = 20;

public:
    int c = 30;
    friend class paras;
    friend int lovnish();
};
class paras
{
public:
    keshav k;
    void fun()
    {
        cout << k.a << endl;
        cout << k.b << endl;
        cout << k.c << endl;
    }
};
int lovnish()
{
    keshav k;

    cout << k.a << endl;
    cout << k.b << endl;
    cout << k.c << endl;
}
int main()
{
    paras p;
    p.fun();
    lovnish();
    return 0;
}
