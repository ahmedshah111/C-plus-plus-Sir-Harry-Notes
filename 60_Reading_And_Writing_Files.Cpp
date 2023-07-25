#include <iostream>
#include <fstream>

using namespace std;

/*
These are some useful classes for working with files in C++:-
1. fstreambase
2. ifstream --> derived from fstreambase
3. ofstream --> derived from fstreambase

In order to work with files in C++, you will have to open it.
Primarily, there are 2 ways to open a file:-
1. Using the constructor
2. Using the member function open() of the class
*/

int main()
{
    string st = "Syed Ahmed Ejaz";
    string st2;

    // Opening Files Using Constructor and Writing to it:-
    ofstream out("Sample60a.txt"); // Writing Operation;
    out << st;

    // Opening Files Using Constructor and Reading to it:-
    ifstream in("Sample60b.txt"); // Reading Operation;
    // in >> st;
    getline(in, st2); // This Function is used to read a whole line.
    cout << st2;
    return 0;
}