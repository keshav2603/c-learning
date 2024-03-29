#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // char s[] = "hello i am keshav";
    // // char *p = "hello";
    // string p = "keshav is a good boy";
    // cout << p << endl;

    // char a[10];
    // cin.get(a, 10);
    // cout << a;
    // char a[10];
    // cin.get(a, 10);
    // cout << "welcome " << a;
    // cin.ignore();
    // char b[10];
    // cin.get(b, 10);
    // cout << b;
    // char a[10] = "keshav";
    // char a[10];
    // cout << "enter a string ";
    // cin.getline(a, 10);
    // cout << "length is " << strlen(a);
    // char a1[10] = "hello";
    // char a2[10] = " world";
    // strcat(a1, a2);
    // cout << a1;
    char a1[10];
    char a2[10] = "world";
    strncpy(a1, a2, 3);
    strcpy(a1, a2);
    cout << a1;
    // char a[20] = "a";

    // char b[20] = "d";
    // // cout << strstr(a, b);
    // // cout << strchr(a, 'r') << endl;
    // // cout << strrchr(a, 'r') << endl;
    // cout << strcmp(a, b);
    // char a[10] = "1234";
    // char b[10] = "1234.12";
    // long int f = strtol(a, NULL, 10);
    // float x = strtod(b, NULL);
    // cout << f << endl;
    // cout << x << endl;
    // char s1[20] = "x=10;y=20;z=30";
    // // cout << strtok(s1, "=;");
    // char *token = strtok(s1, "=");
    // while (token != NULL)
    // {
    //     cout << token << endl;
    //     token = strtok(NULL, "=");
    // }
    // string str;
    // cout << "enter string" << endl;
    // // getline(cin, str)
    // cin >> str;
    // cout << str << endl;
    // cin >> str;
    // // getline(cin, str);
    // cout << str << endl;

    return 0;
}