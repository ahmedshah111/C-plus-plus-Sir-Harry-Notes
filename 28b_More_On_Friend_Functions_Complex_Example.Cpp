#include <iostream>

using namespace std;

class c2; // Forward Declaration:-

class c1
{
private:
    int value_1;
    friend void exchange(c1 &o1, c2 &o2);

public:
    void set_Data(int a)
    {
        value_1 = a;
    }
    void print_Data()
    {
        cout << "The value of c1 after Exchanging is: " << value_1 << endl;
    }
};

class c2
{
private:
    int value_2;
    friend void exchange(c1 &o1, c2 &o2);

public:
    void set_Data(int b)
    {
        value_2 = b;
    }
    void print_Data()
    {
        cout << "The value of c2 after Exchanging is: " << value_2 << endl;
    }
};

void exchange(c1 &X, c2 &Y)
{
    int temp = X.value_1;
    X.value_1 = Y.value_2;
    Y.value_2 = temp;
}

int main()
{
    c1 oc1;
    c2 oc2;
    oc1.set_Data(34);
    oc2.set_Data(78);
    exchange(oc1, oc2);
    oc1.print_Data();
    oc2.print_Data();
    return 0;
}