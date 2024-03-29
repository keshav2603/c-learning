#include <iostream>
using namespace std;
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
    void set_length(int length)
    {
        if (length >= 0)
        {
            this->length = length;
        }
        else
        {
            cout << "the value entered is wrong we are setting default value as 0" << endl;
            length = 1;
        }
    }
    void set_breath(int breath)
    {
        if (breath >= 0)
        {
            this->breath = breath;
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
    void perameter()
    {
        cout << 2 * (length + breath) << endl;
    }
};
int main()
{
    rectangle r(12, 34);
    // rectangle r1(r);
    // r.set_length(10);
    // r.set_breath(15);
    r.area();
    // r1.area();
    // rectangle *p = new rectangle();
    // p = &r;
    // p->length = 10;
    // p->breath = 10;
    // p->area();
    // delete p;

    // rectangle r1;
    // r1.length = 10;
    // r1.breath = 20;
    // r1.area();
    return 0;
}