#include <iostream>

using namespace std;

class Complex
{
private:
    int a;
    int b;

public:
    void set_Data(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print_Data()
    {
        cout << "Complex Number is: " << a << " + " << b << "i" << endl;
    }
    // Below line means that non member - sum_Complex function is allowed to do anything
    // with my private parts (members).
    friend Complex sum_Complex(Complex o1, Complex o2);
};

Complex sum_Complex(Complex o1, Complex o2)
{
    Complex o3;
    o3.set_Data((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.set_Data(2, 7);
    c1.print_Data();

    c2.set_Data(3, 6);
    c2.print_Data();

    sum = sum_Complex(c1, c2);
    sum.print_Data();
    return 0;
}

/* << Properties of Friend Functions >>
1: Not in the scope of class.
2: Since it is not in the scope of class, it cannot be called from the object of that
   class. c1.sumComplex() == Invalid.
3: Can be voked without the help of any object.
4: Usually contains the objects as Arguments.
5: Can be declared inside public or private section of the class.
6: It cannot access the members directly by their names and need object_name.member_name
   to access any member.
*/