#include <iostream>

using namespace std;

int main()
{
    // Basic Example:-
    int a = 4;
    int *ptr = &a;
    cout << "The value of a is: " << *ptr << endl;

    // new Operator:-
    // int *p = new int(40); // Setting Dinamically the value of int as 40 using () these brackets.
    float *p = new float(41.78);
    cout << "The value at address at p is: " << *p << endl;

    int *arr = new int[3]; // ---> Allocating 3 Memory blocks using [] these brackets.
    arr[0] = 10;
    *(arr + 1) = 20;
    arr[2] = 30;
    // delete arr;
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    // delete Operator:-
    return 0;
}