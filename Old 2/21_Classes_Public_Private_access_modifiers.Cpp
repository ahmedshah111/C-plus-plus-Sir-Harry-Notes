// #include <iostream>

// using namespace std;

// class Employee
// {
// private:
//     int a, b, c;

// public:
//     int d, e;
//     void setdata(int a1, int b1, int c1); // Declaration:-
//     void getdata()
//     {
//         cout << "The value of a is: " << a << endl;
//         cout << "The value of b is: " << b << endl;
//         cout << "The value of c is: " << c << endl;
//         cout << "The value of d is: " << d << endl;
//         cout << "The value of e is: " << e << endl;
//     }
// };

// void Employee::setdata(int a1, int b1, int c1)
// {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main()
// {
//     Employee Ahmed;
//     // Ahmed.a = 21; //-->This will throw error because a is private here.
//     Ahmed.d = 67;
//     Ahmed.e = 89;
//     Ahmed.setdata(12, 34, 55);
//     Ahmed.getdata();
//     return 0;
// }

// Practice:-
#include <iostream>
#include <string>

using namespace std;

class Animal
{
private:
    int weight;

public:
    int age;
    void Animal_data(int weight1);
    void getdata()
    {
        cout << "The weight of the animal is: " << weight << endl;
        cout << "The age of the animal is: " << age << endl;
    }
};

void Animal::Animal_data(int weight1)
{
    weight = weight1;
}

int main()
{
    Animal cat;
    cat.age = 6;
    cat.Animal_data(5);
    cat.getdata();
    return 0;
}