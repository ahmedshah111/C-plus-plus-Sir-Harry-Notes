#include <iostream>

using namespace std;

/*
Case 1:-
class B : public A
{
    Order of Execution of Constructor ---> First A() then B().
}

Case 2:-
class A : public B, public C
{
    Order of Execution of Constructor ---> First B() then C() and A().
}

Case 3:-
class A : public B, virtual public C
{
    Order of Execution of Constructor ---> First C() then B() and A().
}
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "-:Base1 Class Constructor is Called:-" << endl;
    }
    void print_data1()
    {
        cout << "The value of data1 is: " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "-:Base2 Class Constructor is Called:-" << endl;
    }
    void print_data2()
    {
        cout << "The value of data2 is: " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int Derived1, Derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        Derived1 = c;
        Derived2 = d;
        cout << "-:Derived Class Constructor is Called:-" << endl;
    }
    void print_data3()
    {
        cout << "The Value of Derived 1 is: " << Derived1 << endl;
        cout << "The Value of Derived 2 is: " << Derived2 << endl;
    }
};

int main()
{
    Derived Ahmed(1, 2, 3, 4);
    Ahmed.print_data1();
    Ahmed.print_data2();
    Ahmed.print_data3();
    return 0;
}