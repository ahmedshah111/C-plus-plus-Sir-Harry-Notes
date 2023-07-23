#include <iostream>
using namespace std;

int sum(float a, int b)
{
    cout<<"Using function with 2 Arguments."<<endl;
    return a + b;
}

int sum(int a, int b, int c)
{
    cout<<"Using function with 3 Arguments."<<endl;
    return a + b + c;
}

//Calculate the volume of a Cylinder.
int volume(double r, int h)
{
    cout<<"Using function with 2 Arguments."<<endl;
    return (3.14 * r * r * h);
}

//Calculate the volume of a Cube.
int volume(int l)
{
    cout<<"Using function with 1 Argument."<<endl;
    return (l * l * l);
} 

//Calculate the volume of a Rectangle Box.
int volume(int l, int b, int h)
{
    cout<<"Using function with 3 Arguments."<<endl;
    return (l * h * b);
}

int main()
{
    cout<<"The sum of 3 and 6 is "<<sum(3, 6)<<endl;
    cout<<"The sum of 3, 6 and 7 is "<<sum(3, 6, 7)<<endl;
    cout<<"The volume of Rectangular Box 3, 6 and 7 is "<<volume(3, 6, 7)<<endl;
    cout<<"The volume of cylinder of height 3 and radius 6 is "<<volume(3, 6)<<endl;
    cout<<"The volume of cube of side 3 is "<<volume(3)<<endl;
    return 0;
}
