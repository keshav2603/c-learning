#include <iostream>
using namespace std;
template <class t>
class stack
{
private:
    t *stk;
    int size;
    int top;

public:
    stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new t[size];
    }
    void push(t x);
    t pop();
};
template <class t>
void stack<t>::push(t x)
{
    if (top == size - 1)
    {
        cout << "the stack is full" << endl;
    }
    else
    {
        top++;
        stk[top] = x;
    }
}
template <class t>
t stack<t>::pop()
{
    t x = 0;
    if (top == -1)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}
int main()
{
    stack<int> s(5);
    stack<float> s1(5);
    s1.push(4.5);
    s.push(10);
    cout << s.pop() << endl;
    cout << s1.pop();
}