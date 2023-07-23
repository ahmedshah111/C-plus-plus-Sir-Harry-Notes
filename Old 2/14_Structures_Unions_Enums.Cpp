#include <iostream>

using namespace std;

typedef struct Employees
{
    int code;
    int salary;
} emp;

union money
{
    int rice;
    float pounds;
    char car;
};

int main()
{
    // Structures:-
    //  emp e[10];
    //  for (int i = 0; i < 2; i++)
    //  {
    //      cout << "Enter the code for Employee: " << i + 1 << endl;
    //      cin >> e[i].code;
    //      cout << "Enter the salary for Employee: " << i + 1 << endl;
    //      cin >> e[i].salary;
    //  }
    //  for (int i = 0; i < 2; i++)
    //  {
    //      cout << "The code for Employee " << i + 1 << " is: " << e[i].code << endl;
    //      cout << "The salary for Employee " << i + 1 << " is: " << e[i].salary << endl;
    //  }

    // Unions:-
    // union money m1; //Unoins will allow to use only one at a time;
    // m1.rice = 34;
    // cout << m1.rice;

    // Enums:-
    enum Meal
    {
        Breakfast,
        Lunch,
        Dinner
    };
    cout << Breakfast << endl;
    cout << Lunch << endl;
    cout << Dinner << endl;

    Meal m1 = Breakfast;
    cout << m1 << endl;
    return 0;
}