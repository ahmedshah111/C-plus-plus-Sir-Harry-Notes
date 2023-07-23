#include <iostream>

using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex() // Default Constructor:-
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y) // Parameterized Constructor:-
    {
        a = x;
        b = y;
    }
    Complex(int x) // Parameterized Constructor taking only one Argument:-
    {
        a = x;
        b = 0;
    }
    void print_Number()
    {
        cout << "Complex Number is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1;
    c1.print_Number();
    Complex c2(2);
    c2.print_Number();
    Complex c3(1, 4);
    c3.print_Number();
    return 0;
}