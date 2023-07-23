#include <iostream>
using namespace std;

int main()
{
    int a = 4, b = 5;
    cout<<"Operators in C++:"<<endl;
    //Arithmetic Operators.
    cout<<"Following are the Arithmetic operators in C++:"<<endl;
    cout<<"The value of a - b is "<<a - b<<endl;
    cout<<"The value of a + b is "<<a + b<<endl;
    cout<<"The value of a * b is "<<a * b<<endl;
    cout<<"The value of a / b is "<<a / b<<endl;
    cout<<"The value of a % b is "<<a % b<<endl;
    cout<<"The value of a++ is "<<a++<<endl;
    cout<<"The value of a-- is "<<a--<<endl;
    cout<<"The value of ++a is "<<++a<<endl;
    cout<<"The value of --a is "<<--a<<endl;
    cout<<endl;
    cout<<endl;
    //Assignment Operators. --> used to assign values into variables.
    // int a = 4, b = 5;
    // char c = 'd';

    //Comparison Operators.
    cout<<"Following are the Comparison operators in C++:"<<endl;
    cout<<"The value of a == b is "<<(a == b)<<endl;
    cout<<"The value of a != b is "<<(a != b)<<endl;
    cout<<"The value of a > b is "<<(a > b)<<endl;
    cout<<"The value of a < b is "<<(a < b)<<endl;
    cout<<"The value of a >= b is "<<(a >= b)<<endl;
    cout<<"The value of a <= b is "<<(a <= b)<<endl;
    cout<<endl;
    cout<<endl;
    //Logical Operators.
    cout<<"Following are the Logical operators in C++:"<<endl;
    cout<<"The value of Logical (And) Operator ((a == b) && (a < b))is: "<<((a == b) && (a < b))<<endl;
    cout<<"The value of Logical (Or) Operator ((a == b) || (a < b))is: "<<((a == b) || (a < b))<<endl;
    cout<<"The value of Logical (Not) Operator (!(a == b))is: "<<(!(a == b))<<endl;
    return 0;
}