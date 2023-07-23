#include <iostream>

using namespace std;

class Base1
{
protected:
    int Base1int;

public:
    void set_Base1int(int a)
    {
        Base1int = a;
    }
};

class Base2
{
protected:
    int Base2int;

public:
    void set_Base2int(int b)
    {
        Base2int = b;
    }
};

class Base3
{
protected:
    int Base3int;

public:
    void set_Base3int(int b)
    {
        Base3int = b;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The Value of Base1 is: " << Base1int << endl;
        cout << "The Value of Base2 is: " << Base2int << endl;
        cout << "The Value of Base3 is: " << Base3int << endl;
        cout << "The Sum of these values are: " << Base1int + Base2int + Base3int << endl;
    }
};

/*

The Inherited Derived Class will look like this:-
Data Members:-
    base1int ---> Protected.
    base2int ---> Protected.
Member Functions:-
    set_Base1int() ---> Public.
    set_Base2int() ---> Public.
    show() ---> Public.

*/

int main()
{
    Derived Ahmed;
    Ahmed.set_Base1int(25);
    Ahmed.set_Base2int(5);
    Ahmed.set_Base3int(20);
    Ahmed.show();
    return 0;
}