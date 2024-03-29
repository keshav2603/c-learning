#include <iostream>
using namespace std;

int main()
{
    //  int a[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // // int a[3][4] = {1, 2, 3, 4,5, 6, 7, 8,9, 10, 11, 12};
    // // int a[3][4] = {1, 2, 3,};
    // for (int i = 0; i <= 2; i++)
    // {
    //     for (int j = 0; j <= 3; j++)
    //     {
    //         // cout << "(" << i << "," << j << ") ";
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    
    // int a[2][3] = {{
    //                    2,/
    //                    4,
    //                    6,
    //                },
    //                {7, 8, 5}};
    // int b[2][3] = {2, 4, 5, 2, 4, 4};
    // int c[2][3];
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         c[i][j] = a[i][j] * b[i][j];
    //         cout << c[i][j] << "  ";
    //     }
    //     cout << endl;
    // }
    // for (auto &x : a)
    // {
    //     for (auto &y : x)
    //     {
    //         cout << y << "," << endl;
    //     }
    // }
    int list[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};
    int key;
    cout << "Enter the number: ";
    cin >> key;

    for (int i = 0; i < 4; i++)
    {
        int l = 0;
        int h = 3; // Change 'h' to 3 (since array indices are 0 to 3)
        int mid;

        while (l <= h)
        {
            mid = (l + h) / 2;

            if (list[i][mid] == key)
            {
                cout << key << " is at row " << i << " and column " << mid << endl;
                return 0;
            }
            else if (list[i][mid] > key)
            {
                h = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
    }

    cout << key << " not found." << endl;

    return 0;
}
