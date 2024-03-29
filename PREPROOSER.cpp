#include <iostream>
using namespace std;
// #define PI 3.1425
// #ifndef PI
// #define PI 22 / 7
// #endif
// int main()
// {
//     cout << PI << endl;
//     return 0;
// }
namespace first
{
    void fun()
    {
        cout << "this is first" << endl;
    }
} // namespace first
namespace second
{
    void fun()
    {
        cout << "this is second fun" << endl;
    }
} // namespace second
using namespace first;
int main()
{
    fun();
    second ::fun();
}