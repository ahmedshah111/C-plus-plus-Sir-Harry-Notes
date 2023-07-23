#include <iostream>

using namespace std;
// This will sum the real and imaginary numbers seperately;
class Complex
{
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdatabysum(Complex o1, Complex o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print_setdata()
    {
        cout << "The Complex Number is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setdata(1, 2);
    c1.print_setdata();

    c2.setdata(3, 4);
    c2.print_setdata();
    
    c3.setdatabysum(c1, c2);
    c3.print_setdata();
    return 0;
}