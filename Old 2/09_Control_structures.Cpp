#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age:" << endl;
    cin >> age;

    // Selection Structure: If-else-if (ladder):-
    //  if (age < 18)
    //  {
    //      cout << "Tum abhi chotey ho, bhaag jaou!" << endl;
    //  }
    //  else if (age == 18)
    //  {
    //      cout << "You are now 18 so you can come to my Party" << endl;
    //  }
    //  else
    //  {
    //      cout << "You can come to my Party" << endl;
    //  }

    // Selection Structure: Switch Case:-
    switch (age)
    {
    case 18:
        cout << "You are 18" << endl;
        break;

    case 22:
        cout << "You are 22" << endl;
        break;

    case 5:
        cout << "You are 5" << endl;
        break;

    default:
        cout << "-:No Special Cases Available:-" << endl;
        break;
    }
    return 0;
}