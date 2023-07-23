#include <iostream>

using namespace std;

int main()
{
    /*
    There are two types of Header Files in C++:
    1:-System Header Files:It comes with the compiler.
    E.g:- #include <iostream>
    2:-User-Defined Header Files:It is written by the programmer.
    E.g:- #include <MyHeaderFile.H> -->If it is not wirtten in the directory, we will get an error.
    */
    int a = 8, b = 2;
    // Arithmetic Operators:-
    cout << "Arithmetic Operators in C++:" << endl;
    cout << "The value of a + b is " << a + b << endl;
    cout << "The value of a - b is " << a - b << endl;
    cout << "The value of a * b is " << a * b << endl;
    cout << "The value of a / b is " << a / b << endl;
    cout << "The value of a % b is " << a % b << endl;
    cout << "The value of a++  is " << a++ << endl;
    cout << "The value of ++a is " << ++a << endl;
    cout << "The value of --a is " << --a << endl;
    cout << "The value of a-- is " << a-- << endl;
    cout << endl;

    // Assignment Operators:-
    int c = 5;
    float d = 4.6;
    char e = 'a';

    // Comparison Operators:-
    cout << "Comparison Operators in C++:" << endl;
    cout << "The value of a == b is " << (a == b) << endl;
    cout << "The value of a != b is " << (a != b) << endl;
    cout << "The value of a < b is " << (a < b) << endl;
    cout << "The value of a > b is " << (a > b) << endl;
    cout << "The value of a >= b is " << (a >= b) << endl;
    cout << "The value of a <= b is " << (a <= b) << endl;
    cout << endl;

    // Logical Operators:-
    cout << "Logical Operators in C++:" << endl;
    cout << "The value of ((a == b) && (a < b)) is " << ((a == b) && (a < b)) << endl;
    cout << "The value of ((a == b) || (a < b)) is " << ((a == b) || (a < b)) << endl;
    cout << "The value of !(a == b) is " << !(a == b) << endl;
    return 0;
}