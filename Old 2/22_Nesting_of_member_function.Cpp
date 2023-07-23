#include <iostream>
#include <string>

using namespace std;

// Nesting of Member Functions:- (See line 41)
// We can directly call the function without object;

class binary
{
private: // Writing this or not will not affect the program. Th Variable will be private before public in both cases;
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a Binary Number:" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Error! It is not a Binary Number:" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying your Binary Numbers:" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    b.display();
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