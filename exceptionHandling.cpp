#include <iostream>
using namespace std;
// class myexception
// {
// };
// int devide(int x, int y)
// {
//     if (y == 0)
//     {
//         throw 1;
//     }
//     else
//     {
//         return x / y;
//     }
// }
// int main()
// {
//     int x = 10, y = 0, z;
//     try
//     {
//         if (y == 0)
//         {
//             throw myexception();
//         }
//         else
//         {
//             z = x / y;
//             cout << z << endl;
//         }
//     }
//     // try
//     // {
//     //     // devide(x, y);
//     //     // cout << devide(x, y);
//     //     // // if (y == 0)
//     //     //     throw 1;
//     //     // else
//     //     //     z = x / y;
//     //     // cout << z << endl;
//     // }
//     catch (myexception e) // or catch(...)
//     {
//         cout << "the answer is not defined" << endl;
//     }
//     cout << "program stops" << endl;
//     return 0;
// }
class stackOverFlow : exception
{
};
class stackUnderFlow : exception
{
};
class Stack
{
private:
    int *stk;
    int top;
    int size; // Added a member variable to store the size

public:
    Stack(int sz)
    {
        size = sz;
        stk = new int[size];
        top = -1;
    }

    void push(int x)
    {
        if (top == size - 1)
        {
            throw StackOverFlow;
        }
        top++;
        stk[top] = x;
    }

    int pop()
    {
        if (top == -1)
        {
            throw StackUnderFlow;
        }
        return stk[top--];
    }
};

int main()
{
    Stack s(5);

    s.push(2);
    s.push(3);
    s.push(4);
    s.push(10);
    s.push(9);
    s.push(8); // Pushing elements onto the stack
}
