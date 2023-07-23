#include <iostream>

using namespace std;

class Base
{
public:
    int variable_Base;
    void Display()
    {
        cout << "Displaying the Variable of Base Class: " << variable_Base << endl;
    }
};

class Derived : public Base
{
public:
    int variable_Derived;
    void Display()
    {
        cout << "Displaying the Variable of Base Class: " << variable_Base << endl;
        cout << "Displaying the Variable of Derived Class: " << variable_Derived << endl;
    }
};

int main()
{
    // Making Objects of Base and Derived Class;
    Base obj_base;       // ---> Base Class Object;
    Derived obj_Derived; // ---> Derived Class Object;

    // Making Pointers of Base and Derived Class;
    Base *Base_ptr;       // ---> Base Class Pointer;
    Derived *Derived_ptr; // ---> Derived Class Pointer;

    // Pointing Base and Derived Class Pointers to Objects;
    Base_ptr = &obj_Derived;    // Pointing Base Class Pointer To Derived Class;
    Derived_ptr = &obj_Derived; // Pointing Derived Class Pointer To Derived Class;

    Base_ptr->variable_Base = 34;
    Base_ptr->Display();
    // Base_ptr->variable_Derived = 34; // ---> It will Throw an Error because it is a Base Class Pointer.

    Derived_ptr->variable_Base = 20;
    Base_ptr->Display();

    Derived_ptr->variable_Derived = 28;
    Derived_ptr->Display();
    return 0;
}