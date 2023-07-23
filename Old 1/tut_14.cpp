#include <iostream>
using namespace std;

typedef struct employee
{
    int id;
    float salary;
    char favchar;
}emp;

union money
{
    int rice; //4 bytes.
    float pounds; //4 bytes.
    char car; //1 byte.
};

int main()
{
    //Structures:
    // emp Ahmed;
    // Ahmed.id = 1007;
    // Ahmed.salary = 600;
    // Ahmed.favchar = 's';

    // cout<<Ahmed.id<<endl;
    // cout<<Ahmed.salary<<endl;
    // cout<<Ahmed.favchar<<endl;
    
    //Union:
    // union money m1; //It will only one value because it allocates our memory and uses only few bytes.
    // m1.rice = 34;
    // m1.car = 'c';
    // m1.pounds = 123.45;
    // cout<<m1.pounds<<endl;

    //Enums:
    enum Meal {Breakfast, Lunch, Dinner};
    Meal m1 = Lunch;
    cout<<(m1 == 1)<<endl;
    // cout<<Breakfast<<endl;
    // cout<<Lunch<<endl;
    // cout<<Dinner<<endl;
    return 0;
}