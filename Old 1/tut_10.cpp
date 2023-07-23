#include <iostream>
using namespace std;

int main()
{
    /*Loops in C++:
    There are three types of loops in C++:
    1. For Loop
    2. While Loop
    3. Do-while Loop*/

    //For Loop:
    //Syntax for For Loop:
    /*for(intialization; condition; updation)
    {
        loop body(C++ Code)
    }
    */

    // for (int i = 0; i < 100; i++)
    // {
    //     cout<<i<<endl;
    // }
    
    //While Loop:
    //Syntax for While Loop.
    // while (/* condition */)
    // {
    //     /* code */
    // }
    
    // int i = 1;
    // while (i <= 40)
    // {
    //     cout<<i<<endl;
    //     i++;
    // }

    //Do-while Loop:
    //Syntax for Do while Loop.
    // do 
    // {
    //     /* code */
    // }while (/* condition */)
    
    // int i = 1;
    // do 
    // {
    //     cout<<i<<endl;
    //     i++;
    // }while (i <= 40);
    
    //Quiz:
    int i = 1, n, a;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter the range for the Table"<<endl;
    cin>>a;
    do
    {
        cout<<n<<" x "<<i <<" = "<<n*i<<endl;
        i++;
    } while (i <= a);
    
    return 0;
}