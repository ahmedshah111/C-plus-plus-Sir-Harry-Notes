// Create a Function(Hint: Make it a Friend Function and use Math.h) which takes 2 Point Objects
// and computes the Distance betweem those 2 Points.
#include <iostream>
#include <cmath>

using namespace std;

class Distance
{
private:
    int x, y;

public:
    Distance(int a, int b) // Parameterized Constructor:-
    {
        x = a;
        y = b;
    }
    friend int dist_btw_point(Distance, Distance);
};

int dist_btw_point(Distance o1, Distance o2)
{
    float c;
    c = sqrt(pow((o2.x - o1.x), 2) + pow((o2.y - o1.y), 2));
    return c;
}

int main()
{
    Distance p1(1, 0), p2(70, 0);
    cout << "Distance Between Two Points is: " << dist_btw_point(p1, p2) << endl;

    return 0;
}

// I Did It, Hoorah:-