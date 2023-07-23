#include <iostream>

using namespace std;

class Bank_Deposit
{
private:
    int principle;
    int years;
    float interest_rate;
    float return_value;

public:
    // Bank_Deposit(){} // If this got commented then objects will be declared like as shown below:-
    Bank_Deposit(int p, int y, float r); // r can be a value like 0.04.
    Bank_Deposit(int p, int y, int r);   // r can be a value like 4.
    void show();
};

Bank_Deposit ::Bank_Deposit(int p, int y, float r) // Constructor which takes r as floating point number.
{
    principle = p;
    years = y;
    interest_rate = r;
    return_value = principle;
    for (int i = 0; i < y; i++)
    {
        return_value = return_value * (1 + interest_rate);
    }
}

Bank_Deposit ::Bank_Deposit(int p, int y, int r) // Constructor which takes r as Integer.
{
    principle = p;
    years = y;
    interest_rate = float(r) / 100;
    return_value = principle;
    for (int i = 0; i < y; i++)
    {
        return_value = return_value * (1 + interest_rate);
    }
}

void Bank_Deposit ::show()
{
    cout << "Principle amount was " << principle
         << ". Return value after " << years
         << " years is: " << return_value << endl;
}

int main()
{
    // Bank_Deposit bd1, bd2; // This will show error if Constructor with 0 Arguments is not Declared.
    int p, y;
    float r;
    int R;
    cout << "Enter the value for Principle, Years and Interest Rate in Decimals:" << endl;
    cin >> p >> y >> r;
    Bank_Deposit bd1 = Bank_Deposit(p, y, r);
    bd1.show();
    cout << "Enter the value for Principle, Years and Interest Rate in Percentage:" << endl;
    cin >> p >> y >> R;
    Bank_Deposit bd2 = Bank_Deposit(p, y, R);
    bd2.show();
    return 0;
}