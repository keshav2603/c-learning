#include <iostream>
#include <vector>
#include <list>
#include <forward_list>
#include <set>
#include <map>
using namespace std;

int main()
{

    map<int, string> m;
    m.insert(pair<int, string>(1, "keshav"));
    m.insert(pair<int, string>(2, "ram"));
    m.insert(pair<int, string>(3, "singla"));
    map<int, string>::iterator itr;
    for (itr = m.begin(); itr != m.end(); itr++)
    {
        cout << itr->first << "  " << itr->second << endl;
    }
    map<int, string>::iterator itr1;
    itr1 = m.find(2);
    cout << itr1->first << "  " << itr1->second << endl;
    for (auto &pair : m)
    {
        int x = pair.first;
        string &y = pair.second;
        cout << x << "\t" << y << endl;
    }
    // set<int> v = {2, 3, 4, 5, 6, 7};
    // v.insert(12);
    // v.insert(29);

    // set<int>::iterator itr;
    // for (itr = v.begin(); itr != v.end(); itr++)
    // {
    //     cout << *itr << endl;
    // }
    // for (int x : v)
    // {
    //     cout << x << endl;
    // }
    // forward_list<int> v = {2, 3, 4, 5, 6, 7};
    // v.push_front(12);
    // v.push_front(29);
    // v.pop_front();
    // forward_list<int>::iterator itr;
    // for (itr = v.begin(); itr != v.end(); itr++)
    // {
    //     cout << *itr << endl;
    // }
    // for (int x : v)
    // {
    //     cout << x << endl;
    // }
    // list<int> v = {2, 3, 4, 5, 6, 7};
    // v.push_back(12);
    // v.push_back(29);
    // v.pop_back();
    // list<int>::iterator itr;
    // for (itr = v.begin(); itr != v.end(); itr++)
    // {
    //     cout << *itr << endl;
    // }
    // for (int x : v)
    // {
    //     cout << x << endl;
    // }
    // vector<int> v = {2, 3, 4, 5, 6, 7};
    // v.push_back(12);
    // v.push_back(29);
    // v.pop_back();
    // vector<int>::iterator itr;
    // for (itr = v.begin(); itr != v.end(); itr++)
    // {
    //     cout << *itr << endl;
    // }
    // for (int x : v)
    // {
    //     cout << x << endl;
    // }
    return 0;
}