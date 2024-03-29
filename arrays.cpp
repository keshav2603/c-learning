#include <iostream>
using namespace std;
int main()
{
    // int sum = 0;
    // int a[] = {12, 329, 3, 59, 3, 3, 872, 5, 5, 4, 7, 5, 548, 654, 45, 5, 65, 1, 545, 6};
    // for (auto i : a)
    // {
    //     sum = sum + i;
    // }
    // cout << "sum is   " << sum;
    // int max = 0;
    // for (int i : a)
    // {
    //     if (i > max)
    //     {
    //         max = i;
    //     }
    // }
    // cout << max;
    // cout << "enter the no you wont to find";
    // int sear;
    // cin >> sear;
    // int a[] = {12, 45, 90, 87, 56, 74, 56, 98, 7, 34, 1, 9, 85, 32};
    // for (int i = 0; i < 14; i++)
    // {
    //     if (a[i] == sear)
    //     {
    //         cout << "the locaton is " << i;
    //     }
    // }
    int l = 0, h = 19, mid, key;
    int list[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    cout << "enter the number" << endl;
    cin >> key;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (list[mid] == key)
        {
            cout << key << " is at position " << mid;
            return 0;
        }
        else if (list[mid] > key)
        {
            h = mid - 1;
        }
        else if (list[mid] < key)
        {
            l = mid + 1;
        }
    }
    cout << key << "  not found";

    return 0;
}