#include <iostream>
#include <string>
using namespace std;
int main()
{
    // string s1 = "hello world";
    // string s2 = "programming is the key to sucess for the money";
    // char c1[20];
    // cout << s1.length() << endl;
    // cout << s1.size() << endl;
    // s1.resize(20);
    // cout << s1.capacity() << endl;
    // cout << s1.max_size() << endl;
    // s1.clear();
    // cout << s1.empty();
    // s1.append(" world");
    // s1.insert(2, "kk", 1);
    // s1.replace(5, 1, " are");
    // s1.push_back('a');
    // s1.pop_back();
    // s1.swap(s2);
    // cout
    //     << s1 << endl;
    // s2.copy(c1, s2.length());
    // c1[(s2.length())] = '\0';
    // cout << c1;
    // cout << s2.find('the') << endl;
    // cout << s2.rfind('the') << endl;
    // cout << s2.find_first_of('ir') << endl;
    // cout << s2.substr(5) << endl;
    // cout << s2.substr(5, 9) << endl;
    // cout << s2.compare(s1) << endl;
    string str = "KESHav";
    string::iterator it;
    for (it = str.end(); it >= str.begin(); it--)
    {
        cout << *it;
    }
    // int i;
    // for (i = 0; i <= str.length(); i++)
    // {
    //     if (str[i] >= 65 && str[i] <= 90)
    //     {
    //         str[i] = str[i] + 32;
    //     }
    // }
    // cout << str;
    // string str = "how are you";
    // int voval = 0, space = 0, consoant = 0;
    // for (int i = 0; i <= str.length(); i++)
    // {
    //     if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
    //     {
    //         voval++;
    //     }
    //     else if (str[i] == ' ')
    //     {
    //         space++;
    //     }
    //     else
    //     {
    //         consoant++;
    //     }
    // }
    // cout << voval << endl;
    // cout << space << endl;
    // cout << consoant << endl;
    //
}