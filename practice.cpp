#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
class item
{
private:
    string itemName;
    float itemPrice;
    int numberOfItem;

public:
    item(string Name, float price, int numberOF)
    {
        itemName = Name;
        itemPrice = price;
        numberOfItem = numberOF;
    }
    friend ofstream &operator<<(ofstream &ofshop, item &i);
    friend ifstream &operator>>(ifstream &ifshop, item &i);
};

int main()
{
    int n;
    string name;
    float price;
    int qty;
    float totalAmount = 0;

    cout << "enter the number of item you buy:  " << endl;
    cin >> n;
    item *list[n];
    cout << "enter the items" << endl;
    for (int i = 0; i < n; i++) // loop to enter all item,price,quantity
    {
        cout << "enter the name of item number : " << i + 1 << endl;
        cin >> name;
        cout << "enter the price of " << name << endl;
        cin >> price;
        cout << "enter the quantity of " << name << endl;
        cin >> qty;
        totalAmount = totalAmount + (price * qty);
        list[i] = new item(name, price, qty);
    }
    ofstream shop("myshop.txt", ios::trunc);
    if (!shop.is_open())
    {
        cout << "shop is not open come tommorow" << endl;
    }
    for (int i = 0; i < n; i++) // loop to enter data in file myshop.txt
    {
        shop << *list[i];
    }
    cout << "the total amount is : " << totalAmount << endl;
    cout << "if you wont the bill of item press 1" << endl;
    bool bill;
    cin >> bill;
    ifstream shop1("myshop.txt");
    if (bill)
    {
        for (int i = 0; i < n; i++)
        {
            shop1 >> *list[i];
        }
        cout << "thank for shoping " << endl;
    }
    else
    {
        cout << "thank for shoping " << endl;
    }
    for (int i = 0; i < n; i++) // deleting the memory
    {
        delete list[i];
    }

    shop.close();
    return 0;
}

ofstream &operator<<(ofstream &ofshop, item &i) // friend of class item
{
    ofshop << i.itemName << endl;
    ofshop << i.itemPrice << endl;
    ofshop << i.numberOfItem << endl;
    ofshop << endl;
    return ofshop;
}
ifstream &operator>>(ifstream &ifshop, item &i)
{
    ifshop >> i.itemName;
    ifshop >> i.itemPrice;
    ifshop >> i.numberOfItem;
    cout << "the name of item is : " << i.itemName << endl;
    cout << "the cost of item is : " << i.itemPrice << endl;
    cout << "the quantity of item is : " << i.numberOfItem << endl;
    cout << endl;
}
