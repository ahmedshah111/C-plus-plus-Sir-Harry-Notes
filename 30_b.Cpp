#include <iostream>

using namespace std;

class Point
{
private:
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void display_Point()
    {
        cout << "The Point is: (" << x << ", " << y << ")" << endl;
    }
};

int main()
{
    Point P(1, 3);
    P.display_Point();
    Point q(2, 7);
    q.display_Point();
    return 0;
}