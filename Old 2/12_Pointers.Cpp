#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int *b = &a;
    int **c = &b;
    cout << "The Address of a is: " << &a << endl;
    cout << "The Address of a is: " << b << endl;
    cout << "The value of a is: " << a << endl;
    cout << "The value of a is: " << *b << endl;
    cout << "The value of b is: " << b << endl;
    cout << "The value of b is: " << **c << endl;
    cout << "The Address of b is: " << &b << endl;
    cout << "The Address of b is: " << c << endl;

    return 0;
}