#include <iostream>

using namespace std;

/*
Early Binding (Compile-Time Polymorphism):-
As the name indicates, compiler (or linker) directly associate an address to the function call.
It replaces the call with a machine language instruction that tells the mainframe to leap to the address
of the function.
By default early binding happens in C++.
Late binding (discussed below) is achieved with the help of virtual keyword.
 */

class Base
{
public:
    void show()
    {
        cout << "In Base" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "In Derived" << endl;
    }
};

int main()
{
    Derived obj_Derived;
    Base *Base_ptr = &obj_Derived;
    Base_ptr->show(); // Compile Time Polymorphism;
    return 0;
}

#include <iostream>

using namespace std;
/*
Late Binding (Run-Time Polymorphism):-
In this, the compiler adds code that identifies the kind of object at runtime
then matches the call with the right function definition.
This can be achieved by declaring a virtual function.
*/
class Base
{
public:
    virtual void show()
    {
        cout << "In Base" << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "In Derived" << endl;
    }
};

int main()
{
    Derived obj_Derived;
    Base *Base_ptr = &obj_Derived;
    Base_ptr->show(); // Run Time Polymorphism;
    return 0;
}