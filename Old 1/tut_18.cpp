#include <iostream>
using namespace std;

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }
    else
    {
        return fib(n-2) + fib(n-1); 
    }
}

// int factorial(int n)
// {
//     if (n <= 1)
//     {
//         return 1;
//     }
//     else
//     {
//         return n * factorial(n-1);
//     }
// }

/*Step by step calculation for Factorial(4):
Factorial(4) = 4 * Factorial(3);
Factorial(4) = 4 * 3 * Factorial(2);
Factorial(4) = 4 * 3 * 2 * Factorial(1);-->At this stage, it will replace the condition.
Factorial(4) = 4 * 3 * 2 * 1;
Factorial(4) = 24
*/
int main()
{
    //Factorial of a number:
    // 6! --> 6*5*4*3*2*1 = 720.
    // 0! --> 1 by definition.
    // 1! --> 1 by definition.
    // n! --> n * (n-1).
    // int n;
    // cout<<"Enter the value for n"<<endl;
    // cin>>n;
    // cout<<"The Factorial of "<<n<<" is "<<factorial(n)<<endl;
    int f;
    cout<<"Enter the number"<<endl;
    cin>>f;
    cout<<"The term in Fibonacci sequence at position "<<f<<" is "<<fib(f)<<endl;
    return 0;
}