#include <iostream>

using namespace std;

class Shop
{
private:
    int Product_ID[50];
    int Product_Price[50];
    int counter;

public:
    void initialize_counter()
    {
        counter = 0;
    }
    void set_price(void);
    void display_price(void);
};

void Shop ::set_price()
{
    cout << "Enter the ID of Product no. " << counter + 1 << endl;
    cin >> Product_ID[counter];
    cout << "Enter the Price of Product:" << endl;
    cin >> Product_Price[counter];
    counter++;
}

void Shop ::display_price()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of Product with ID " << Product_ID[i] << " is: " << Product_Price[i] << endl;
    }
}

int main()
{
    Shop Grocery;
    // Grocery.initialize_counter();
    for (int i = 0; i < 2; i++)
    {
        Grocery.set_price();
    }
    Grocery.display_price();
    return 0;
}