#include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// void swap(int a, int b)    -->It will not work.Because it is using call by value.
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// void swapPointers(int *a, int *b)    //It will work due to Call by Reference with Pointers.
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = *temp;
// }

int & swapReferenceVariables(int &a, int &b) //It will work due to C++ Reference Variables.    
{
    int temp; //The '&' will change the value for a at return a;
    temp = a;
    a = b;
    b = temp;
    return a;
}

int main()
{
    int a = 4, b = 5;
    // cout<<"The sum of 4 and 5 is "<<sum(a, b)<<endl;
    // swapPointers(a, b);
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    swapReferenceVariables(a, b) = 444;
    cout<<"The value of a after swaping is "<<a<<endl;
    cout<<"The value of b after swaping is "<<b<<endl;
    return 0;
}