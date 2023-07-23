#include <iostream>

using namespace std;

class Employee
{
private:
    int id;
    static int count;

public:
    void set_data(void)
    {
        cout << "Enter an Id:" << endl;
        cin >> id;
        count++;
    }
    void get_data(void)
    {
        cout << "The Id of Employee: " << count << " is: " << id << endl;
    }
    static void getcount(void)
    {
        cout << "The value of count is: " << count << endl;
    }
};

int Employee::count; // Default value is 0;
// count is the static data member of the class Employee;

int main()
{
    Employee Ahmed, Harry, Dangerous_Coder;
    // Ahmed.id = 1002 --> cannot do this because it is Private;
    // Ahmed.count = 1 --> cannot do this because it is Private;
    Ahmed.set_data();
    Ahmed.get_data();
    Employee::getcount();

    Harry.set_data();
    Harry.get_data();
    Employee::getcount();

    Dangerous_Coder.set_data();
    Dangerous_Coder.get_data();
    Employee::getcount();
    
    return 0;
}