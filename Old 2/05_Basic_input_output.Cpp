#include <iostream>

using namespace std;

int main()
{
    // This '<<' is called Insertion operator which is used to print something on the screen;
    // This '>>' is called Extraction operator which is used to scan something;
    int num1, num2;
    cout << "Enter the value of Number 1:\n";
    cin >> num1;
    cout << "Enter the value of Number 2:\n";
    cin >> num2;
    cout << "The sum is " << num1 + num2;
    return 0;
}