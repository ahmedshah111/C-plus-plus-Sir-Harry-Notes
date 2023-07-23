#include <iostream>
using namespace std;

//Function Prototype.
//type function-name (arguments);
// int sum(int a, int b); --> Acceptable.
int sum(int, int); //--> Acceptable.
// int sum(int a, b); --> Not Acceptable.
void g(void);

int main()
{
    int num1, num2;
    cout<<"Enter the value for number 1"<<endl;
    cin>>num1;
    cout<<"Enter the value for number 2"<<endl;
    cin>>num2;
    //num1 and num2 are Actual Parameters.
    cout<<"The sum is "<<sum(num1, num2)<<endl;
    g();
    return 0;
}

//Formal Parameters a and b are taking values from Actual Parameters num1 and num2.
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

void g()
{
    cout<<"Good Morning"<<endl;
}