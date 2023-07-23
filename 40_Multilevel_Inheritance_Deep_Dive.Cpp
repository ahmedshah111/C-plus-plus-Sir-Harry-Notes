#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_number;

public:
    int set_roll_number(int r)
    {
        roll_number = r;
    }
    void get_roll_number()
    {
        cout << "The Roll No. of Student is: " << roll_number << endl;
    }
};

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks()
    {
        cout << "The marks obtained in maths are: " << maths << endl;
        cout << "The marks obtained in physics are: " << physics << endl;
    }
};

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your Result is: " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /*
    Notes:-
        If we are inheriting B form A and C from B:[A--->B--->C]
    1: A is the Base class for B and is the Base class for C.
    2: A--->B--->C is called Inheritance Path.
    */
    Result Ahmed;
    Ahmed.set_roll_number(1007);
    Ahmed.set_marks(90.0, 90.0);
    Ahmed.display();
    return 0;
}