#include <iostream>

using namespace std;

class base
{
    int data1; // Private by default and it is not inheritable.
    int data2;

public:
    void setdata(); // Funtion Declaration:-
    int getdata1(); // Funtion Declaration:-
    int getdata2(); // Funtion Declaration:-
};

void base ::setdata() // Funtion Definition:-
{
    data1 = 10;
    data2 = 20;
}

int base ::getdata1() // Funtion Definition:-
{
    return data1;
}

int base ::getdata2() // Funtion Definition:-
{
    return data2;
}

class derived : public base // Class is being derived publically.
{
    int data3;

public:
    void process();
    void display();
};

void derived ::process()
{
    data3 = getdata2() * getdata1();
}

void derived ::display()
{
    cout << "The value of Data 1 is: " << getdata1() << endl;
    cout << "The value of Data 2 is: " << getdata2() << endl;
    cout << "The value of Data 3 is: " << data3 << endl;
}

int main()
{
    derived der;
    der.setdata();
    der.process();
    der.display();
    return 0;
}

// If the class has private variables then they can only be accessed by a function call.