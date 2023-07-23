#include <iostream>

using namespace std;

// int swap(int a, int b) -->This will not work due to call by value:-
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// int swapPointer(int *a, int *b) //-->This will work due to call by reference:-
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int swapReferenceVariable(int &a, int &b) //-->This will work due to reference variables:-
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

int &swapReferenceVariable(int &a, int &b) //-->This will change the value of b:-
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 3, b = 6;
    cout << "The value of a before swapping is " << a << " and b is " << b << endl;
    // swap(a, b);
    // swapPointer(&a, &b); -->We can also write this:- swapPointer(a, b);
    swapReferenceVariable(a, b) = 55;
    cout << "The value of a after swapping is " << a << " and b is " << b << endl;
    return 0;
}