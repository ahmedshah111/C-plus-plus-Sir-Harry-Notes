#include <iostream>
using namespace std;

int main()
{
    // int marks[4] = {10, 20, 30, 40}; 
    //Orr
    int marks[] = {10, 20, 30, 40};
    //We can change value of array.
    marks[2] = 39;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    
    //Printing Arrays using Loops.
    // for (int i = 0; i < 4; i++)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl; 
    // }

    // int i = 0;
    // while (i < 4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl; 
    //     i++;
    // }

    // int i = 0;
    // do
    // {
    //     cout<<"The value of marks "<<i+1<<" is "<<marks[i]<<endl; 
    //     i++;
    // }while (i < 4);

    //Pointers and Arrays.
    int* ptr = marks;
    cout<<*(ptr++)<<endl;
    cout<<*(++ptr)<<endl;
    // cout<<"The value of marks[0] is "<<*ptr<<endl;
    // cout<<"The value of marks[1] is "<<*(ptr + 1)<<endl;
    // cout<<"The value of marks[2] is "<<*(ptr + 2)<<endl;
    // cout<<"The value of marks[3] is "<<*(ptr + 3)<<endl;
    return 0;
}