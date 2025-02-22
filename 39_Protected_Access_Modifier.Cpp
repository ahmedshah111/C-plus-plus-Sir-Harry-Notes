#include <iostream>

using namespace std;

class Base
{
    protected:
    int a;
    private:
    int b;
};

/*
For a Protected Member:-
                              Public Derivation     Private Derivation    Protected Derivation
    1: Private Members:-         Not Inherited        Not Inherited          Not Inherited
    2: Protected Members:-       Protected            Private                Protected
    3: Public Members:-          Public               Private                Protected
*/ 

class Derived : protected Base
{

};

int main()
{
    Base b;
    Derived d;
    // cout << d.a;  // It will not work since a is protected in both base as well as derived Class.
    return 0;
}