#include <iostream>
using namespace std;
int main()
{
    int day;
    cout << "enter the day no: ";
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "mon";
        break;
    case 2:
        cout << "tue";
        break;
    case 3:
        cout << "wed";
        break;
    case 4:
        cout << "thu";
        break;
    case 5:
        cout << "fri";
        break;
    }
    return 0;
}