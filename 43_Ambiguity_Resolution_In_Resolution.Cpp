#include <iostream>

using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "How are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Kaisey hoo?" << endl;
    }
};

class Derived : public Base1, public Base2
{
public:
    void greet()
    {
        Base2 ::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello World!" << endl;
    }
};

class D : public B
{
public:
    void say()
    {
        cout << "Hello Everyone!" << endl;
    }
};

int main()
{
    // Ambiguity 1:-
    // Derived d;
    // d.greet();
    // Ambiguity 2:-
    D b;
    b.say();
    return 0;
}