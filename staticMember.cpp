#include <iostream>
using namespace std;
// class test
// {
// public:
//     int a = 0;
//     static int count;
//     test()
//     {
//         a = 10;
//         count++;
//     }
//     static int ok();
// };
// int test::count = 0;
// int test::ok()
// {
//     count = 25;
//     return count;
// }
// class car
// {
// public:
//     static int carprice;
//     void static get_price()
//     {
//         cout << carprice << endl;
//     }
// };
// int car::carprice = 100000000;

class outer
{
public:
    class inner
    {
    public:
        void show()
        {
            cout << "show of inner" << endl;
        }
    };
    inner i;
};
int main()
{
    // cout << car::carprice << endl;
    // cout << test::count << endl;
    // test t1, t2;
    // cout << t1.count << endl;
    // cout << t2.count << endl;
    // cout << t1.count << endl;
    // cout << t2.ok() << endl;
}