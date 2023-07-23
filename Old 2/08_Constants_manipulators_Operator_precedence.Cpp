#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    //Constant in C++:-
    // const int a = 45;
    // cout << "The value of a is " << a << " which will not change because it is a constant." << endl;

    //Manipulators in C++:-
    int a = 2, b = 45, c = 678;
    cout << "The value of a without 'setw' is: " << a << endl;
    cout << "The value of b without 'setw' is: " << b << endl;
    cout << "The value of c without 'setw' is: " << c << endl;

    cout << "The value of a with 'setw' is: " << setw(4) <<a << endl;
    cout << "The value of b with 'setw' is: " << setw(4) <<b << endl;
    cout << "The value of c with 'setw' is: " << setw(4) <<c << endl;
    return 0;
}