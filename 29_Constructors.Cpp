// #include <iostream>

// using namespace std;

// // Creating a Constructor:-
// // Constructor is a special member function with same name as of the class.
// // It is used to initialize the objects of the class.
// // It is automatically invoked(called) whenever an object is created

// class Complex
// {
// private:
//     int a, b;

// public:
//     Complex(void); // Constructor Declaration:-
//     void print_Number()
//     {
//         cout << "Complex Number is: " << a << " + " << b << "i" << endl;
//     }
// };

// Complex ::Complex(void) // ---> This is a Default Constructor as it accepts no Parameters.
// {
//     a = 10;
//     b = 2;
//     cout << "-:Constructor:-" << endl;
// }

// int main()
// {
//     Complex c1;
//     c1.print_Number();
//     return 0;
// }

/*
Characteristics of Constructors:-
1: It should be declared in the public section of class.
2: They are automatically invoked whenever an object is created.
3: They cannot return values and do not have return types.
4: It can have Default Arguments.
5: We canot refer to their Address.
*/

#include <iostream>

using namespace std;

class Area
{
private:
    int length;
    int width;

public:
    Area(int a, int b);
    int measure()
    {
        return (length * width);
    }
};

Area ::Area(int a, int b)
{
    length = a;
    width = b;
}

int main()
{
    Area a1(2, 5);
    Area a2(4, 7);
    cout << "Area is: " << a1.measure() << "m^2" << endl;
    cout << "Area is: " << a2.measure() << "m^2" << endl;
    return 0;
}