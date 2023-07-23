#include <iostream>

using namespace std;

class ShopItem
{
private:
    int id;
    float price;

public:
    void set_Data(int a, float b)
    {
        id = a;
        price = b;
    }
    void get_Data()
    {
        cout << "The Id of this Item is: " << id << endl;
        cout << "The Price of this Item is: " << price << endl;
    }
};

int main()
{
    int size = 3;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout << "Enter the Id and Price of Item Number: " << i + 1 << endl;
        cin >> p >> q;
        ptr->set_Data(p, q);
        ptr++;
    }
    for (i = 0; i < size; i++)
    {
        cout << "Item Nmber: " << i + 1 << endl;
        ptrTemp->get_Data();
        ptrTemp++;
    }

    return 0;
}