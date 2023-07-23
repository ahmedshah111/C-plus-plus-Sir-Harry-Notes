#include <iostream>

using namespace std;

class Employee
{
private:
    int ID;
    int Salary;
    static int num; // ---> This will make the count of every object same.

public:
    void set_ID()
    {
        Salary = 100;
        cout << "Enter the ID:" << endl;
        cin >> ID;
        num++;
    }
    void print_ID()
    {
        cout << "The ID of Employee is: " << ID << " an this is Employee No. " << num << endl;
        cout << "The Salary of Employee is: " << Salary << endl;
    }
};

int Employee ::num = 1000;

int main()
{
    Employee META[10];
    for (int i = 0; i < 10; i++)
    {
        META[i].set_ID();
        META[i].print_ID();
    }

    return 0;
}