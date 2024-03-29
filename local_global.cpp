#include <iostream>
using namespace std;
// int x = 10;
// int incr(int a)
// {
//     for (int i = 1; i <= a; i++)
//     {
//         glob *= i;
//     }
// }
// void fun()
// {
//     static int x = 10;
//     x++;
//     cout << x << endl;
// }
// void fun(int n)
// {
//     if (n > 0)
//     {
//         // cout << n << endl;
//         fun(n - 1);
//         cout << n << endl;
//     }
// }
// int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};2
// int Search(int A[], int n, int key)
// {
//     for (int i = 0; i < n; i++)
//         if (key == A[i])
//             return i;
//     return 0;
// }
int max(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int (*ptr)(int, int);
    ptr = max;
    cout << ptr(12, 40);

    // int A[] = {2, 4, 5, 7, 10, 9, 13};
    // int k;
    // cout << "Enter an Element to be Searched:";
    // cin >> k;
    // int index = Search(A, 7, k);

    // cout << "Element found at index :" << index << endl;

    // int x = 5;
    // fun(x);
    // fun();
    // fun();
    // fun();
    // fun();
    // int x = 20;
    // {
    //     int x = 30;
    //     cout << x << endl;
    // }
    // cout << x << endl;
    // cout << ::x << endl;

    // cout << glob << endl;
    // incr(10);
    // cout << glob << endl;
    return 0;
}