#include <iostream>

using namespace std;

class A
{
private:
    int a;

public:
    // A& set_data(int a)
    void set_data(int a)
    {
        this->a = a;
        // return *this;
    }
    void get_data()
    {
        cout << "The Value of a is: " << a << endl;
    }
};

int main()
{
    // this is a keyword which is a pointer which points to the object which invokes the member function.
    A a;
    // a.set_data(4).get_data(); ---> Implicit Method:-
    a.set_data(4);
    a.get_data(); // ---> Explicit Method:-
    return 0;
}