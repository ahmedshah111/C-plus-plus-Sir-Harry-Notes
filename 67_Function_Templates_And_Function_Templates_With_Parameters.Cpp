#include <iostream>

using namespace std;

template <class T1, class T2>
float average(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float a;
    a = average(4, 6.5);
    printf("The value of a is: %.2f\n", a);

    char x = 'a', y = 'b';
    swapp(x, y);
    cout << "The Value of x is: " << x << endl
         << "The Value of y is: " << y << endl;
    return 0;
}