#include <iostream>

using namespace std;

class Complex
{
    private:
    int a;
    int b;

    public:
    void set_Data(int v1, int v2) // This Function assigns a and b those values which are passed by set_Data() Function.
    {
        a = v1;
        b = v2;
    }
    void set_Data_by_sum(Complex o1, Complex o2) // ---> Passing Objects as Functions Arguments;
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
    void print_Data()
    {
        cout << "Complex Number is: " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.set_Data(1, 2);
    c1.print_Data();

    c2.set_Data(2, 9);
    c2.print_Data();

    c3.set_Data_by_sum(c1, c2); // ---> Passing Objects as Functions Arguments;
    c3.print_Data();
    return 0;
}