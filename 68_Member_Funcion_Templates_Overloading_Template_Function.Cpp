#include <iostream>

using namespace std;

template <class T>
class Ahmed
{
public:
    T data;
    Ahmed(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void Ahmed<T>::display()
{
    cout << data << endl;
}

void function(int a)
{
    cout << "I am First Function(): " << a << endl;
}

template <class T>
void function1(T a)
{
    cout << "I am Templatised Function(): " << a << endl;
}

int main()
{
    // Ahmed<int> A(67);
    // Ahmed<float> A(5.8);
    // Ahmed<char> A('j');
    // cout << h.data;
    // A.display();

    // function(4); // Exact Match takes the Highest Priority;
    function1(23); // Exact Match takes the Highest Priority;
    return 0;
}