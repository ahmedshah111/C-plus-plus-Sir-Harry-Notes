#include <iostream>

using namespace std;

// Destructor never takes an Argument nor does it return value.

int count = 0;

class num
{
public:
    num() // Default Constructor:-
    {
        count++;
        cout << "This the time for calling Constructor for Object Number: " << count << endl;
    }
    ~num() // Destructor:-
    {
        cout << "This the time for calling Destructor for Object Number: " << count << endl;
        count--;
    }
};

int main()
{
    cout << "-:We are inside our Main Function:-" << endl;
    cout << "-:Creating First Object as n1:-" << endl;
    num n1;
    {
        cout << "Entering this Block" << endl;
        cout << "Creating two More Objects" << endl;
        num n2, n3;
        cout << "Existing this Block" << endl;
    }
    cout << "-:Back to our Main Function:-" << endl;
    return 0;
}