// #include <iostream>

// using namespace std;

// class Employee
// {
// private:         // Access Specifier.
//     int a, b, c; //---> Data Members

// public:                                   // Access Specifier.
//     int d, e;                             //---> Data Members
//     void setdata(int a1, int b1, int c1); // ---> Member Functions.
//     void printdata()
//     {
//         cout << "The value of a is " << a << endl;
//         cout << "The value of b is " << b << endl;
//         cout << "The value of c is " << c << endl;
//         cout << "The value of d is " << d << endl;
//         cout << "The value of e is " << e << endl;
//     }
// };

// void Employee ::setdata(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     Employee Ahmed;
//     // Ahmed.a = 89; ---> This will throw an error because a is private.
//     Ahmed.d = 34;
//     Ahmed.e = 46;
//     Ahmed.setdata(12, 32, 78);
//     Ahmed.printdata();
//     return 0;
// }

// Example:-
#include <iostream>

using namespace std;

class Date_of_Birth
{
private:
    int Year;

public:
    int Month, Day;
    void set_date_of_birth(int nYear); // Function Declaration:-
    void print_date_of_birth()
    {
        cout << "Day: " << Day << endl;
        cout << "Month: " << Month << endl;
        cout << "Year: " << Year << endl;
    }
};

void Date_of_Birth :: set_date_of_birth(int nYear) // Function Definition.
{
    Year = nYear;
}

int main()
{
    Date_of_Birth Ahmed; // Object Creation:-
    Ahmed.Day = 16;
    Ahmed.Month = 10;
    Ahmed.set_date_of_birth(2005);
    Ahmed.print_date_of_birth();
    return 0;
}