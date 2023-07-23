#include <iostream>

using namespace std;

// inline int product(int a, int b)
// {
//     return a * b;
// }

int product(int a, int b)
{                     // Not recommend to use with inline:-
    static int c = 0; // This executes only once:-
    c = c + 1;        // Next time this function will run, the value of c will be retained.
    return a * b + c;
}

float moneyReceived(int Currentmoney, float factor = 1.04)
{
    return Currentmoney * factor;
}

// int strlen(const char *p)
// {
// const will not change the main purpose of function and it will not allow others to change it.
// }

int main()
{
    int a, b;
    // cout << "Enter the value of a and b:" << endl;
    // cin >> a >> b;
    // cout << "The Product of a and b is " << product(a, b) << endl; --->Repeat these lines to test inline:-
    int money;
    cout << "How much money you will deposit in your bank account:" << endl;
    cin >> money;
    cout << "You will receive " << moneyReceived(money) << " Rs after one year" << endl;
    cout << "For VIP: You will receive " << moneyReceived(money, 1.1) << " Rs after one year" << endl;
    return 0;
}