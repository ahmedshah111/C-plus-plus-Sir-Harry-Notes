#include <iostream>

using namespace std;

// Forward Declaration;
class Complex;

class Calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(Complex, Complex);
    int sumImagcomplex(Complex, Complex);
};

class Complex
{
    int a, b;
    // Individually declaraing functions as friends:-
    // friend int Calculator ::sumRealcomplex(Complex, Complex);
    // friend int Calculator ::sumImagcomplex(Complex, Complex);

    // Aliter: Declaraing the entire Claculator class as Friend:-
    friend class Calculator;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print_setdata()
    {
        cout << "The Complex Number is: " << a << " + " << b << "i" << endl;
    }
};

int Calculator ::sumRealcomplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}
int Calculator ::sumImagcomplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Complex o1, o2;
    o1.setdata(1, 4);
    o2.setdata(5, 7);
    Calculator calc;
    int result = calc.sumRealcomplex(o1, o2);
    cout << "The sum of real part of o1 and o2 is: " << result << endl;
    int result2 = calc.sumImagcomplex(o1, o2);
    cout << "The sum of Imaginary part of o1 and o2 is: " << result2 << "i" << endl;
    return 0;
}