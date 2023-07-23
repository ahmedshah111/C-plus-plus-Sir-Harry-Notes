#include <iostream>

using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_roll_no(int r)
    {
        roll_no = r;
    }
    void print_roll_no()
    {
        cout << "Your Roll no. is: " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float Maths, Physics;

public:
    void set_marks(float a, float b)
    {
        Maths = a;
        Physics = b;
    }
    void print_marks()
    {
        cout << "-:Your Result is Here:-" << endl
             << "Maths = " << Maths << endl
             << "Physics = " << Physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "Your PT score is: " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = Maths + Physics + score;
        print_roll_no();
        print_marks();
        print_score();
        cout << "Your Total marks are: " << total << endl;
    }
};

int main()
{
    Result Ahmed;
    Ahmed.set_roll_no(1007);
    Ahmed.set_marks(78.5, 68.2);
    Ahmed.set_score(4);
    Ahmed.display();
    return 0;
}