#include <iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    //Selection Control Structure: If else-if else Ladder.
    // if (age < 18)
    // {
    //     cout<<"You cannot come to my party"<<endl;
    // }
    // else if (age == 18)
    // {
    //     cout<<"You are a kid and you will get a kid pass and then you can come to my party"<<endl;
    // }
    // else
    // {
    //     cout<<"You can come to my party"<<endl;
    // }
    
    //Selection Control Structure: Switch case Statement.
    switch (age)
    {
    case 18:
        cout<<"You are 18"<<endl;
        break;
    case 22:
        cout<<"You are 22"<<endl;
        break;
    case 2:
        cout<<"You are 2"<<endl;
        break;
    default:
    cout<<"No Special Cases"<<endl;
        break;
    }
    cout<<"Done with switch case"<<endl;
    return 0;
}