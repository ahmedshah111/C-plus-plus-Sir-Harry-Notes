#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void print_setdata()
    {
        cout << "The Complex Number is: " << a << " + " << b << "i" << endl;
    }
    // Below lines means that non member - setdata_sum function is allowed to do anything with
    // my private parts(members);
    friend Complex setdata_sum(Complex o1, Complex o2);
};

Complex setdata_sum(Complex o1, Complex o2)
{
    Complex o3;
    o3.setdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, c3;
    c1.setdata(1, 4);
    c1.print_setdata();

    c2.setdata(5, 8);
    c2.print_setdata();

    c3 = setdata_sum(c1, c2);
    c3.print_setdata();
    return 0;
}

/* Properties of Friend Functions:-

1: Not in the scope of class.
2: Since it is not in the scope of class, it cannot be called from the object of that
   class. c1.sumComplex() == Invalid.
3: Can be voked without the help of any object.
4: Usually contains the objects as Arguments.
5: Can be declared inside public or private section of the class.
6: It cannot access the members directly by their names and need object_name.member_name 
   to access any member.

*/