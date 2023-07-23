#include <iostream>

using namespace std;
// Creating a Constructor:-
// Constructor is a special member function with same name as of the class.
// It is used to initialize the objects of the class.
// It is automatically invoked(called) whenever an object is created
class Complex
{
private:
    int a, b;

public:
    Complex(void); // ---> Constructor Declaration.
    void printnumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex::Complex(void) // ---> This is a Default Constructor as it accepts no Parameters.
{
    a = 0;
    b = 0;
    cout << "Hello World" << endl;
}

int main()
{
    Complex c1, c2;
    c1.printnumber();
    c2.printnumber();
    return 0;
}

/*
Characteristics of Constructors:-
1: It should be declared in the public section of class.
2: They are automatically invoked whenever an object is created.
3: They cannot return values and do not have return types.
4: It can have Default Arguments.
5: We canot refer to their Address.
*/