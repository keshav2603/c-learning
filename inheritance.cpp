#include <iostream>
using namespace std;
// class rectangle
// {
// private:
//     int length, breath;

// public:
//     rectangle(int l = 1, int b = 1)
//     {
//         set_length(l);
//         set_breath(b);
//     }
//     rectangle(rectangle &rect)
//     {
//         length = rect.length;
//         breath = rect.breath;
//     }
//     int get_length() {}
//     void set_length(int length)
//     {
//         if (length > 0)
//         {
//             this->length = length;
//         }
//         else
//         {
//             cout << "the value entered is wrong we are setting default value as 0" << endl;
//             length = 1;
//         }
//     }
//     void set_breath(int breath)
//     {
//         if (breath > 0)
//         {
//             this->breath = breath;
//         }
//         else
//         {
//             cout << "the value entered is wrong we are setting default value as 0" << endl;
//             breath = 1;
//         }
//     }
//     int area()
//     {
//         int area = length * breath;
//         return area;
//     }
//     void perameter()
//     {
//         cout << 2 * (length + breath) << endl;
//     }
// };
// class cuboid : public rectangle
// {
// private:
//     int height;

// public:
//     cuboid(int l, int b, int h)
//     {
//         set_length(l);
//         set_breath(b);
//         set_height(h);
//     }
//     void set_height(int h)
//     {
//         if (h > 0)
//         {
//             this->height = h;
//         }
//         else
//         {
//             cout << "the value entered is wrong we are setting default value as 0" << endl;
//             this->height = 1;
//         }
//     }
//     get_hight() { return this->height; }
//     void volume()
//     {
//         int volume = area() * get_hight();
// //         cout << "volume of cuboid is " << volume << endl;
// //     }
// // };
// class base
// {
// public:
//     base()
//     {
//         cout << "this is defoult of base class" << endl;
//     }
//     base(int x)
//     {
//         cout << "par of base :" << x << endl;
//     }
// };
// class derive : public base
// {
// public:
//     // derive()
//     // {
//     //     cout << "this is default of derive" << endl;
//     // }
//     // derive(int a)
//     // {
//     //     cout << "par of derive " << a << endl;
//     // }
//     // derive(int x, int a) : base(x)
//     // {
//     //     cout << "par of derive " << a << endl;
//     // }
// };
class base
{
public:
    fun()
    {
        cout << "this is fun of base" << endl;
    }
};
class derive : public base
{
public:
    fun1()
    {
        cout << "this is fun of derive" << endl;
    }
};
int main()
{
    // derive d;
    // base *p = &d;
    // base *p = new derive;
    p->fun();
    // base *b;
    // b=new derive();
    // derive(10, 12);
    // derive d(10);
    // derive d;
    // cuboid c1(10, 1, 4);
    // c1.area();
    // c1.perameter();
    // c1.volume();
    return 0;
}