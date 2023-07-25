#include <iostream>

using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class Ahmed
{
public:
    T1 a;
    T2 b;
    T3 c;
    Ahmed(T1 x, T2 y, T3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "The value of a is: " << a << endl
             << "The value of b is: " << b << endl
             << "The value of c is: " << c << endl;
    }
};

int main()
{
    Ahmed<> obj(4, 7.8, 'v');
    obj.display();
    cout << endl;
    Ahmed<char, float, char> obj2('h', 4.6, 'd');
    obj2.display();
    return 0;
}