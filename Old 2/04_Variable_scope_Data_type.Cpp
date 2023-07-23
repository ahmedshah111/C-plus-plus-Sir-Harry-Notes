#include <iostream>

using namespace std;

int main()
{
    int a = 4, b = 8;
    float pi = 3.14;
    char c = 'u';
    bool d = false;
    cout << "The value of a is "<<a<<"\nThe value of b is "<<b<<"\n";
    cout << "The value of pi is "<<pi;
    cout << "\nThe value of c is "<<c;
    cout << "\nThe value of d is "<<d;
    return 0;
} 

//Understanding of Local and Global variables:- 
// #include <iostream>

// using namespace std;

// int global = 6;
// void sum()
// {
//     int a;
//     cout<<global;
// }

// int main()
// {
//     int global = 8; //Local variable has precedence over global;
//     //global value is updated to 40;
//     global = 40;
//     sum();
//     cout<<global;
//     return 0;
// }