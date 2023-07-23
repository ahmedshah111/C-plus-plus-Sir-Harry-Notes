#include <iostream>

using namespace std;

int main()
{
    // int score[2][6];
    // int sum;
    // // for (int i = 0; i < 3; i++)
    // // {
    // //     cout << "Enter the marks of Student: " << i + 1 << endl;
    // //     cin >> marks[i];
    // // }

    // // for (int i = 0; i < 3; i++)
    // // {
    // //     cout << "The marks of Student " << i + 1 << " is:  " << marks[i] << endl;
    // // }

    // //Multi-Dimensional Array:-
    // for (int i = 0; i < 1; i++)
    // {
    //     for (int j = 0; j < 6; j++)
    //     {
    //         cout << "Enter the score of over " << i + 1 << " in ball: " << j + 1 << endl;
    //         cin >> score[i][j];
    //     }
    // }
    
    // for (int i = 0; i < 1; i++)
    // {
    //     for (int j = 0; j < 6; j++)
    //     {
    //         cout << "The score of over " << i + 1 << " in ball " << j + 1 << " is "<< score[i][j] << endl;
            
    //     }
    // }

    //Pointer and Arrays:-
    int marks[] = {23, 45, 76, 89};
    int *p = marks;
    // cout << "The value of marks[0] using pointers is: " << *p << endl;
    // cout << "The value of marks[1] using pointers is: " << *(p + 1) << endl;
    // cout << "The value of marks[2] using pointers is: " << *(p + 2) << endl;
    // cout << "The value of marks[3] using pointers is: " << *(p + 3) << endl;
    
    //Another Concept:-
    cout << *(p++) << endl;
    cout << *(++p) << endl;
    return 0;
}