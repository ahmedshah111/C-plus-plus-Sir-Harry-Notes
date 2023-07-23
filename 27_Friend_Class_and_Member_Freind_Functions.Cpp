#include <iostream>

using namespace std;

// Forward Declaration:-
class Complex;

class Calculator
{
public:
    int sum_Real_Complex(Complex, Complex);      // ---> Function Declaration.
    int sum_Imaginary_Complex(Complex, Complex); // ---> Function Declaration.
};

class Complex
{
private:
    int a, b;
    // Individually declaraing functions as friends:-
    // friend int Calculator ::sum_Real_Complex(Complex, Complex);
    // friend int Calculator ::sum_Imaginary_Complex(Complex, Complex);

    // Aliter: Declaraing the entire Claculator class as Friend:-
    friend class Calculator;

public:
    void set_Data(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
};

int Calculator ::sum_Real_Complex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sum_Imaginary_Complex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex c1, c2;
    c1.set_Data(2, 6);
    c2.set_Data(2, 9);
    Calculator c3;
    int result = c3.sum_Real_Complex(c1, c2);
    cout << "The Sum of Real Part of c1 and c2 is: " << result << endl;
    int result_2 = c3.sum_Imaginary_Complex(c1, c2);
    cout << "The Sum of Imaginary Part of c1 and c2 is: " << result_2 << "i" << endl;
    return 0;
}