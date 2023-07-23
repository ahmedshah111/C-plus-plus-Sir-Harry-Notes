#include <iostream>

using namespace std;

class Number
{
private:
    int a;

public:
    Number(int num = 0) // Constructor with Default Arguments:-
    {
        a = num;
    }
    // When no copy constructor is found, compiler supplies its own copy constructor;
    Number(Number &obj) // Copy Constructor:-
    {
        cout << "-:Copy Constructor is Invoked:-" << endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The number for this object is: " << a << endl;
    }
};

int main()
{
    Number x(17), y(86), z(45);
    x.display();
    y.display();
    z.display();
    Number z1(z);  // Copy Constructor invoked.
    z1.display();  // z1 should exactly resemble z or x or y;
    Number z2 = y; // Copy Constructor invoked.
    z2.display();
    return 0;
}