#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
    // Function Objects(Functor): Function wrapped in a class so that it available like 
    // an Object;
    int arr[] = {45, 2, 1, 20, 34, 75};
    sort(arr, arr + 6);
    // sort(arr, arr + 6, greater<int>()); // ---> Passing Function object because sort() 
                                        //      method takes an Object.
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}