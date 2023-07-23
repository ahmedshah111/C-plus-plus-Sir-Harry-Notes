#include <iostream>

using namespace std;

/*
Syntax for Initializing list in Constructor:-
constructor (argument - list) : initialization - section
{
    Assignment + Code;
}
Example:-
class Test
{
    int a;
    int b;
    public:
    Test(int i, int j) : a(i), b(j)
    {
        Constructor - Body;
    }
};

1: Initialization is just used to give values to the class data members;
2: It is used when the body of our constructor gets very complex;
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(i)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i + b) ---> Red Flag: This will create problema because a is initiated first.
    Test(int i, int j)
    {
        a = i;
        b = j;
        cout << "Constructor Executed" << endl;
        cout << "The Value of a is: " << a << endl;
        cout << "The Value of b is: " << b << endl;
    }
};

int main()
{
    Test t(4, 6);
    return 0;
}