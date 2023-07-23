#include <iostream>

using namespace std;

class Employee
{
    int id;
    int salary;
    static int count;

public:
    void setId_salary(void)
    {
        cout << "Enter the Id of Employee: " << endl;
        cin >> id;
        cout << "Enter the Salary of Employee: " << endl;
        cin >> salary;
    }
    void getId_salary(void)
    {
        cout << "The Id of Employee is: " << id << endl;
        cout << "The Salary of Employee is: " << salary << endl;
    }
};

int main()
{
    Employee Ahmed, Harry, Rohan, Shruti; //--->Without Array;
    Ahmed.setId_salary();
    Ahmed.getId_salary();

    Harry.setId_salary();
    Harry.getId_salary();

    // Employee Game_Studios[10];     --->Basic Array;
    // Game_Studios[0].setId_salary();
    // Game_Studios[0].getId_salary();

    // Employee Game_Studios[10];
    // for (int j = 0; j < 10; j++)
    // {
    //     Game_Studios[j].setId_salary();
    //     Game_Studios[j].getId_salary();
    // }

    return 0;
}