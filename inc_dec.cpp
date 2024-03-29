#include <iostream>
using namespace std;
int main()
{
    // // int j;
    // int i = 5, j;
    // // j = i++;         //post increment
    // j = ++i;

    // cout << i << j << endl;
    // char a = 127;
    // ++a;
    // cout << (int)a;
    int year;
    cout << "enter the year\n";
    cin >> year;
    if (year % 4 == 0)
    {
        cout << "it is a leap year\n";
    }
    else
    {
        cout << "it is not a leap year";
    }

    return 0;
}