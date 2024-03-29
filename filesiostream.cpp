#include <iostream>
#include <fstream>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    friend ofstream &operator<<(ofstream &ofs, student &s);
    friend ifstream &operator>>(ifstream &ifs, student &s);
};
ofstream &operator<<(ofstream &ofs, student &s)
{
    ofs << s.name << endl;
    ofs << s.rollno << endl;
    ofs << endl;
    return ofs;
}
ifstream &operator>>(ifstream &ifs, student &s)
{
    // string name_;
    // int rollno_;
    // ifs >> s.name;
    // ifs >> s.rollno;
    cout << "name  " << s.name << endl;
    cout << "rollno  " << s.rollno << endl;
    return ifs;
}
int main()
{
    student s1, s2;
    s1.name = "keshav";
    s2.name = "ram";
    s1.rollno = 35;
    s2.rollno = 23;
    ofstream fs1("student.txt", ios::trunc);
    ifstream fs2("student.txt");

    // fs1 << s1.name << endl;
    // fs1 << s1.rollno << endl;
    fs1 << s1;
    fs1 << s2;
    fs2 >> s1;
    fs2 >> s2;
    fs1.close();
    fs2.close();

    // ofstream f1("my.txt", ios::trunc);
    // f1 << "hello world" << endl;
    // f1 << "keshav is best" << endl;
    // ifstream f2("my.txt");
    // if (f2.is_open()) // or if (f2)
    // {
    //     cout << "file is open" << endl;
    // }
    // // ifstream f2;
    // // f2.open("my.txt");
    // string str;
    // f2 >> str;
    // cout << str << endl;
    // if (!f2.eof())
    // {
    //     cout << "file is not reach end" << endl;
    // }
    // f2.close();
    // f1.close();
    return 0;
}