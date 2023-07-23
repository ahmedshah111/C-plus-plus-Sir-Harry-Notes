#include <iostream>

using namespace std;

// int display(int a, int b);
int display(int, int);

int main()
{
    int x, y;
    cout << "Enter the value of x:" << endl;
    cin >> x;
    cout << "Enter the value of y:" << endl;
    cin >> y;
    cout << "The sum is " << display(x, y) << endl;
    //x and y are Actual Parameters;
    return 0;
}

int display(int a, int b)
{
    //a and b are Formal Parameters;
    return a + b;
}