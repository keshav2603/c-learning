#include <iostream>
using namespace std;
int main()
{
    // int no;
    // cout << "enter the no of which yu wont table";
    // cin >> no;
    // int i = 1;
    // while (i <= 10)
    // {
    //     cout << no << " * " << i << " = " << i * no << endl;
    //     i++;
    // }
    // int n, i = 1, sum = 0;
    // cout << "enter the no of which you need sum\n";
    // cin >> n;

    // while (i <= n)
    // {
    //     sum += i;
    //     i++;
    // }
    // cout << "sum on number is " << sum;
    // int n, i = 1, sum = 1;
    // cout << "enter the no of which you need factorial\n";
    // cin >> n;

    // while (i <= n)
    // {
    //     sum *= i;
    //     i++;
    // }
    // cout << "factorial of number is " << sum;
    // int num, fact = 0;
    // cout << "enter the number of which you need all factors\n";
    // cin >> num;
    // int i = 1;
    // while (i <= num)
    // {
    //     if (num % i == 0)
    //     {
    //         fact = i;
    //         cout << "factors are " << fact << endl;
    //     }
    //     i++;
    // }
    // int num, fact = 0, sum = 0;
    // cout << "enter the number of which you need all factors\n";
    // cin >> num;
    // int i = 1;
    // while (i <= num)
    // {
    //     if (num % i == 0)
    //     {
    //         fact = i;
    //         // cout << "factors are " << fact << endl;
    //         sum += i;
    //     }
    //     i++;
    // }
    // if (sum == 2 * num)
    // {
    //     cout << "yes it is prefect no";
    // }
    // else
    // {
    //     cout << "it is not a perfect no";
    // }
    // int n;
    // cout << "enter the no :  ";
    // cin >> n;
    // while (true)
    // {

    //     cout << n % 10 << endl;
    //     n = n / 10;
    //     if (n == 0)
    //     {
    //         break;
    //     }
    // }
    int n, r, sum = 0, m;
    cin >> n;
    m = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (m == sum)
    {
        cout << "yes";
    }

    return 0;
}