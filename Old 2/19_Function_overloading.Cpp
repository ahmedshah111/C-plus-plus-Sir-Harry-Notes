#include <iostream>

using namespace std;

int sum(int a, int b)
{
    cout << "Using function with 2 Arguments:" << endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout << "Using function with 3 Arguments:" << endl;
    return a + b + c;
}

// Volume of a Cylinder:-
int volume(double r, int h)
{
    return 3.14 * r * r * h;
}

// Volume of a Cube:-
int volume(int a)
{
    return a * a * a;
}

// Volume of a Rectangle:-
int volume(int l, int b, int h)
{
    return l * b * h;
}

int main()
{
    cout << "The sum of 4 and 5 is: " << sum(4, 5) << endl;
    cout << "The sum of 4, 7 and 5 is: " << sum(4, 7, 5) << endl;
    cout << endl;
    cout << "The volume of a Cube is: " << volume(5) << endl;
    cout << "The volume of a Cylinder is: " << volume(4, 6) << endl;
    cout << "The volume of a Cuboid(Rectangle) is: " << volume(5, 6, 8) << endl;
    return 0;
}