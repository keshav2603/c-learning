#include <iostream>
using namespace std;
int main()
{
    // int c = 1;
    // for (int i = 1; i < 5; i++)
    // {
    //     for (int j = 1; j < 5; j++)
    //     {
    //         // cout << "(" << i << "," << j << ") ";
    //         cout << c << " ";
    //         c++;
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i < 5; i++)
    // {
    //     for (int j = 1; j < 5; j++)
    //     {
    //         if (i >= j)
    //         {
    //             cout << "*";
    //         }
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i < 5; i++)
    // {
    //     for (int j = 1; j < 5; j++)
    //     {
    //         if (j >= i)
    //         {
    //             cout << "* ";
    //         }
    //         else
    //         {
    //             cout << "  ";
    //         }
    //     }
    //     cout << endl;
    // }
    for (int i = 1; i < 5; i++)
    {
        for (int j = 1; j < 5; j++)
        {
            if (i + j > 4)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}