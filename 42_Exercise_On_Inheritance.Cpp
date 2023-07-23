#include <iostream>
#include <cmath>

using namespace std;

class Simple_Calculator
{
protected:
    float Num1;
    float Num2;

public:
    void set_Numbers1(float a, float b)
    {
        Num1 = a;
        Num2 = b;
    }
    float add()
    {
        return Num1 + Num2;
    }
    float subtract()
    {
        return Num1 - Num2;
    }
    float multiply()
    {
        return Num1 * Num2;
    }
    float divide()
    {
        return Num1 / Num2;
    }
};

class Scientific_Calculator
{
protected:
    float Num3;
    float Num4;

public:
    void set_Numbers2(float a, float b)
    {
        Num3 = a;
        Num4 = b;
    }
    float power()
    {
        return pow(Num3, Num4);
    }
    float square_root1()
    {
        return sqrt(Num3);
    }
    float square_root2()
    {
        return sqrt(Num4);
    }
    float cube_root1()
    {
        return cbrt(Num3);
    }
    float cube_root2()
    {
        return cbrt(Num4);
    }
    float sin1()
    {
        return sin(Num3);
    }
    float sin2()
    {
        return sin(Num4);
    }
    float cos1()
    {
        return cos(Num3);
    }
    float cos2()
    {
        return cos(Num4);
    }
    float tan1()
    {
        return tan(Num3);
    }
    float tan2()
    {
        return tan(Num4);
    }
    float exp1()
    {
        return exp(Num3);
    }
    float exp2()
    {
        return exp(Num4);
    }
};

class Hybrid_Calculator : public Simple_Calculator, public Scientific_Calculator
{
public:
    void display()
    {
        int Choice;
        cout << "Addition : 1" << endl
             << "Subtraction : 2" << endl
             << "Multiplication : 3" << endl
             << "Division : 4" << endl
             << "Power : 5" << endl
             << "Square Root : 6" << endl
             << "Cube Root : 7" << endl
             << "Sine Function : 8" << endl
             << "Cosine Function : 9" << endl
             << "Tangent Function : 10" << endl
             << "Exponent Function : 11" << endl;
        cin >> Choice;
        if (Choice == 1)
        {
            cout << "The Sum of " << Num1 << " + " << Num2 << " is: " << add() << endl;
        }
        else if (Choice == 2)
        {
            cout << "The Subtraction of " << Num1 << " - " << Num2 << " is: " << subtract() << endl;
        }
        else if (Choice == 3)
        {
            cout << "The Multiplication of " << Num1 << " * " << Num2 << " is: " << multiply() << endl;
        }
        else if (Choice == 4)
        {
            cout << "The Division of " << Num1 << " / " << Num2 << " is: " << divide() << endl;
        }
        else if (Choice == 5)
        {
            cout << "The Power of " << Num1 << " is: " << power() << endl;
        }
        else if (Choice == 6)
        {
            cout << "The Square Root of " << Num1 << " is: " << square_root1() << endl;
            cout << "The Square Root of " << Num2 << " is: " << square_root2() << endl;
        }
        else if (Choice == 7)
        {
            cout << "The Cube Root of " << Num1 << " is: " << cube_root1() << endl;
            cout << "The Cube Root of " << Num2 << " is: " << cube_root2() << endl;
        }
        else if (Choice == 8)
        {
            cout << "The sine of " << Num1 << " is: " << sin1() << endl;
            cout << "The sine of " << Num2 << " is: " << sin2() << endl;
        }
        else if (Choice == 9)
        {
            cout << "The cosine of " << Num1 << " is: " << cos1() << endl;
            cout << "The cosine of " << Num2 << " is: " << cos2() << endl;
        }
        else if (Choice == 10)
        {
            cout << "The tangent of " << Num1 << " is: " << tan1() << endl;
            cout << "The tangent of " << Num2 << " is: " << tan2() << endl;
        }
        else if (Choice == 11)
        {
            cout << "The exponent of " << Num1 << " is: " << exp1() << endl;
            cout << "The exponent of " << Num2 << " is: " << exp2() << endl;
        }
        else
        {
            cout << "-:No More Function:-" << endl;
        }
    }
};

int main()
{
    cout << "This Calculator can Perform:-" << endl
         << "Addition" << endl
         << "Subtraction" << endl
         << "Multiplication" << endl
         << "Division" << endl
         << "Power" << endl
         << "Square Root" << endl
         << "Cube Root" << endl
         << "Sine Function" << endl
         << "Cosine Function" << endl
         << "Tangent Function" << endl
         << "Exponent Function" << endl;
    float a, b;
    cout << "Enter the First Number:" << endl;
    cin >> a;
    cout << "Enter the Second Number:" << endl;
    cin >> b;
    Hybrid_Calculator Ahmed;
    Ahmed.set_Numbers1(a, b);
    Ahmed.set_Numbers2(a, b);
    Ahmed.display();
    return 0;
}

// Sir Harry's Code:-

// #include <iostream>
// #include <cmath>

// using namespace std;

// class SimpleCalculator
// {
//     int a, b;

// public:
//     void getDataSimple()
//     {
//         cout << "Enter the value of a" << endl;
//         cin >> a;
//         cout << "Enter the value of b" << endl;
//         cin >> b;
//     }

//     void performOperationsSimple()
//     {
//         cout << "The value of a + b is: " << a + b << endl;
//         cout << "The value of a - b is: " << a - b << endl;
//         cout << "The value of a * b is: " << a * b << endl;
//         cout << "The value of a / b is: " << a / b << endl;
//     }
// };

// class ScientificCalculator
// {
//     int a, b;

// public:
//     void getDataScientific()
//     {
//         cout << "Enter the value of a" << endl;
//         cin >> a;
//         cout << "Enter the value of b" << endl;
//         cin >> b;
//     }

//     void performOperationsScientific()
//     {
//         cout << "The value of cos(a) is: " << cos(a) << endl;
//         cout << "The value of sin(a) is: " << sin(a) << endl;
//         cout << "The value of exp(a) is: " << exp(a) << endl;
//         cout << "The value of tan(a) is: " << tan(a) << endl;
//     }
// };

// class HybridCalculator : public SimpleCalculator, public ScientificCalculator
// {
// };

// int main()
// {
//     HybridCalculator calc;
//     calc.getDataScientific();
//     calc.performOperationsScientific();
//     calc.getDataSimple();
//     calc.performOperationsSimple();

//     return 0;
// }
