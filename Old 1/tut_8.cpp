#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // int a = 34;
    // cout<<"The value of a was "<<a<<endl;
    // a = 44;
    // cout<<"The value of a is "<<a;
    
    //Constant in C++.
    // const int a = 34;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<endl;
    // a = 34; //You will get an error because a is an constant. 
    // cout<<"The value of a is "<<a<<endl;

    //Manipulators in C++.
    // int a = 5, b = 56, c = 2444;
    // cout<<"The value of a without setw is "<<a<<endl;
    // cout<<"The value of b without setw is "<<b<<endl;
    // cout<<"The value of c without setw is "<<c<<endl;
    // cout<<endl;
    // cout<<"The value of a is "<<setw(4)<<a<<endl;
    // cout<<"The value of b is "<<setw(4)<<b<<endl;
    // cout<<"The value of c is "<<setw(4)<<c<<endl;

    //Operator Precedence.
    int a = 4, b = 3, c;
    c = ((((a*5)+b)-67)+88);
    cout<<c;
    return 0;
}