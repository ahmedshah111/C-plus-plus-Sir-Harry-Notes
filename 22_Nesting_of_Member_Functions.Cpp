#include <iostream>
#include <string>

using namespace std;

class binary
{
    // private: ---> Initially all members are private in class;
    string s;
    void check_binary(void);

public:
    void read_binary(void);
    void ones_compliment(void);
    void display_binary(void);
};

void binary ::read_binary()
{
    cout << "Enter a Binary Number" << endl;
    cin >> s;
}

void binary ::check_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment()
{
    void check_binary(void);
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
        else
        {
            s.at(i) = '1';
        }
    }
}

void binary ::display_binary()
{
    cout << "Displaying Binary Number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary a;
    a.read_binary();
    a.display_binary();
    // a.check_binary(); ---> Now it is a Private Member Function which is Nested in another Member Function.
    a.ones_compliment();
    a.display_binary();
    return 0;
}

/* OOPS: Classes and Objects:-
    C++ --> C with classes by stoustroup;
    Class --> Extention of Structures (in C);
    Structures had Following Limitations:-
     -- Members are Public;
     -- No Methods;
    Classes have:-
     -- Structures and More;
     -- Method and Properties;
     -- Make few Members as Private & few as Public;
    Structures in C++ are typedefed;
    We can declare objects along with class Declaration;(!Recommended)
    For Example:-
    class Employee
    {
        // Class Definition;
    }Ahmed, Rohan, Harry;
    Ahmed.salary = 5, does not make any sense if salary is private;
    */