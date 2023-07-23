#include <iostream>

using namespace std;

class Employee // Base Class:-
{
public:
    int id;
    float salary;
    Employee(int inp_id) // Constructor taking one Argument:-
    {
        id = inp_id;
        salary = 34;
    }
    Employee()
    {
    }
};

// Creating a Programmer Class Derived from Employee Base Class.
class Programmer : public Employee // Derived Class:-
{
public:
    int Language_Code = 9;
    Programmer(int inpid)
    {
        id = inpid;
        Language_Code = 9;
    }
    void get_Data()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee Ahmed(1), Harry(2);
    cout << Ahmed.salary << endl;
    cout << Harry.salary << endl;
    cout << Harry.id << endl;
    Programmer Haider(10);
    cout << Haider.Language_Code << endl;
    cout << Haider.id << endl;
    Haider.get_Data();
    return 0;
}

// Syntax of Derived Class:-
/*
class {{Derived-class-name}} : {{Visibility-mode}} {{base-class-name}}
{
    class members/methods/etc.
};
Note:-
1: Default Visibility Mode is Private.
2: Public Visibility Mode: Public Members of the Base Class becomes Public Members of the Derived Class.
3: Private Visibility Mode: Public Members of the Base Class becomes Private Members of the Derived Class.
4: Private Members are never Inherited.
*/