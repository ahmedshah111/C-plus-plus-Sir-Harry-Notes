#include <iostream>

using namespace std;

template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int m) // Constructor with 1 Argument;
    {
        size = m;
        arr = new T[size]; // Allocating custom type array of size; E.g. arr = new int[3];
    }
    T dotproduct(Vector &v) // Function taking a vector;
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += arr[i] * v.arr[i]; // arr[i] is the Current Vector and v.arr[i] is the Input Vector;
        }
        return d;
    }
};

int main()
{
    Vector<float> v1(3);
    v1.arr[0] = 4.7;
    v1.arr[1] = 2.3;
    v1.arr[2] = 1.2;

    Vector<float> v2(3);
    v2.arr[0] = 1.1;
    v2.arr[1] = 0.4;
    v2.arr[2] = 4.1;
    float a = v1.dotproduct(v2);
    cout << a << endl;
    return 0;
}