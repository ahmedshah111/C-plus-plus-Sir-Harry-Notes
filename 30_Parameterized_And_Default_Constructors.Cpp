#include <iostream>

using namespace std;

class Complex
{
private:
    int a, b;

public:
    Complex(int x, int y); // Constructor Declaration:-
    void print_Number()
    {
        cout << "Complex Number is: " << a << " + " << b << "i" << endl;
    }
};

Complex ::Complex(int x = 15, int y = 34) // ---> This is a Parameterized Constructor as it accepts 2 Parameters.
{
    a = x;
    b = y;
    cout << "-:Constructor:-" << endl;
}

int main()
{
    // Implicit Call:-
    Complex a;
    a.print_Number(); // This will print the Default Arguments given in the Constructor:-

    // Explicit Call:-
    Complex b = Complex(5, 3);
    b.print_Number();
    return 0;
}
