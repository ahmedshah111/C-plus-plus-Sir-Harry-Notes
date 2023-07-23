#include <iostream>

using namespace std;

class Complex
{
private:
    int real;
    int imaginary;

public:
    void print_data()
    {
        cout << "The value of Real part is: " << real << endl;
        cout << "The value of Imaginary part is: " << imaginary << "i" << endl;
    }
    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // Complex *ptr = new Complex;
    // // (*ptr).set_data(2, 34);
    // ptr->set_data(2, 34);

    // // (*ptr).print_data();
    // ptr->print_data();

    // Array of Objects:-
    Complex *ptr = new Complex[4];
    ptr->set_data(2, 34);
    ptr->print_data();
    return 0;
}