#include <iostream>
using namespace std;
class complex
{
private:
    int real, imaginary;

public:
    complex(int real = 0, int imaginary = 0)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    // complex operator+(complex &x)
    // {
    //     complex temp;
    //     temp.real = real + x.real;
    //     temp.imaginary = imaginary + x.imaginary;
    //     return temp;
    // }
    friend complex operator+(const complex &c1, const complex &c2);
    friend ostream &operator<<(ostream &out, const complex &c1);

    // void get_number()
    // {
    //     cout << real << "+i" << imaginary;
    // }
};
complex operator+(const complex &c1, const complex &c2)
{
    complex temp;
    temp.real = c2.real + c1.real;
    temp.imaginary = c2.imaginary + c1.imaginary;
    return temp;
}
ostream &operator<<(ostream &out, const complex &c1)
{
    out << c1.real << " + i" << c1.imaginary;
    return out;
}

int main()
{
    complex c1(2, 4);
    complex c2(4, 8);
    complex c3;
    c3 = c1 + c2;
    // c3.get_number();
    cout << c3;
    return 0;
}
