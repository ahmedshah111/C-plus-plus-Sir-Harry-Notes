#include <iostream>

using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(int, int); // ---> Constructor Declaration.
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(int x, int y) // ---> This is a Parameterized Constructor as it accepts 2 Parameters.
{
    a = x;
    b = y;
}

int main()
{
    // Implicit Call;
    Complex a(4, 5);
    a.printnumber();

    // Explicit Call;
    Complex b = Complex(6, 7);
    b.printnumber();

    return 0;
}