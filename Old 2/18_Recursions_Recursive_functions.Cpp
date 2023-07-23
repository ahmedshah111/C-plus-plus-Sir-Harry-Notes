#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * factorial(n - 1);
}

int fib(int n)
{
    if (n < 2)
    {
        return 1;
    }

    return fib(n - 2) + fib(n - 1);
}

// Step by step Calculation of Factorial (4);
// fatorial(4) = 4 * fatorial(3);
// fatorial(4) = 4 * 3 * fatorial(2);
// fatorial(4) = 4 * 3 * 2 * fatorial(1);
// fatorial(4) = 4 * 3 * 2 * 1;
// fatorial(4) = 24;

int main()
{
    // Factorial of a number:-
    //  6! = 6*5*4*3*2*1 = 720.
    //  n! = n * (n - 1);
    //  0! = 1;
    //  1! = 1;
    int a;
    cout << "Enter an Integer" << endl;
    cin >> a;
    // cout << "The factoral of " << a << " is " << factorial(a) << endl;
    cout << "The fibonacci number at positon " << a << " is " << fib(a) << endl;
    return 0;
}