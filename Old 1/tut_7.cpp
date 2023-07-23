#include <iostream>
using namespace std;

int c = 45;   //-->Global Values.

int main()
{
    //*****************Built-in Data Types*********************.
    // int a, b, c;    //-->Local Variavles.
    // cout<<"Enter the value of a."<<endl;
    // cin>>a;
    // cout<<"Enter the value of b."<<endl;
    // cin>>b;
    // c = a + b;
    // cout<<"The sum is "<<c<<endl;
    // cout<<"The value of Global variable is "<<::c; // :: -->Scope Resolution Operator.
    // //It is used to print an Global Variable.

    // float d = 34.4f; //f represents that it is a floating point variable.
    // long double e = 35.4l;  //l represents that it is a Long double variable.
    // cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;
    // cout<<endl;
    // cout<<"The size of 34.4 is "<<sizeof(34.4)<<endl; //It will give by default double.
    // cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;

    //********************Reference Variables********************.
    //Rohan Das --> Monty --> Rohu --> Dangerous Coder.
    // float x = 455;
    // float &y = x;
    // cout<<x<<endl;
    // cout<<y<<endl;

    //********************Typecasting********************.
    int a = 45;
    float b = 45.44;
    // cout<<"The value of a is "<<float(a)<<endl;//Both will print the same.
    // cout<<"The value of a is "<<(float)a<<endl;
    // cout<<endl;
    // cout<<"The value of b is "<<int(b)<<endl;//Both will print the same.
    // cout<<"The value of b is "<<(int)b<<endl;
    // int c = int(b); //This will also print the same.
    cout<<"The value of expression is "<<a + b<<endl;
    cout<<"The value of expression is "<<a + int(b)<<endl;
    cout<<"The value of expression is "<<a + (int)b<<endl;
    return 0;
}