#include <iostream>

using namespace std;

class shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initialize_Counter(void)
    {
        counter = 0;
    }
    void set_Price(void);
    void display_Price(void);
};

void shop::set_Price(void)
{
    cout << "Enter the Id of your Item: " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter the Price of your Item:" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void shop::display_Price(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Item: " << i + 1 << " with Id " << itemId[i] << " is: " << itemPrice[i] << endl;
    }
}

int main()
{
    shop Products;
    int n;
    cout << "How many Items you want to Add:" << endl;
    cin >> n;
    for (int m = 0; m < n; m++)
    {
        Products.set_Price();
    }
    for (int m = 0; m < 1; m++)
    {
        Products.display_Price();
    }

    return 0;
}