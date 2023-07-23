#include <iostream>

using namespace std;

class Y;

class X
{
private:
    int data;

public:
    void set_value(int v1)
    {
        data = v1;
    }
    friend void add(X, Y);
};

class Y
{
private:
    int data_2;

public:
    void set_value(int v2)
    {
        data_2 = v2;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Sum of Objects of X and Y is: " << o1.data + o2.data_2 << endl;
}

int main()
{
    X a1;
    a1.set_value(5);
    Y b1;
    b1.set_value(10);
    add(a1, b1);
    return 0;
}