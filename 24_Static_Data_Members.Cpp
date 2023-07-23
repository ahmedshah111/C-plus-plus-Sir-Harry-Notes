#include <iostream>

using namespace std;

class Employee
{
private:
    int id;
    // int count; ---> We cannot use this because every object has its own count.
    static int count; // ---> If we use static variable than every object will have only one count.

public:
    void set_data()
    {
        cout << "Enter the ID:" << endl;
        cin >> id;
        count++;
    }
    void print_data()
    {
        cout << "The ID of Employee is: " << id << " and this is Employee no. " << count << endl;
    }
    void static print_count() // ---> Static Member Function.
    {
        cout << "The value of count is: " << count << endl;
        // Static Member Functions are used to make those functions that can acsess only static data members.
    }
};

int Employee ::count;

int main()
{
    Employee Ahmed, Harry, Hassan;
    Ahmed.set_data();
    Ahmed.print_data();
    Employee ::print_count();

    Harry.set_data();
    Harry.print_data();
    Employee ::print_count();

    Hassan.set_data();
    Hassan.print_data();
    Employee ::print_count();

    return 0;
}