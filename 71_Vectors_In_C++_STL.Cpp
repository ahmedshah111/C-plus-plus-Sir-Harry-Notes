#include <iostream>
#include <vector>

using namespace std;

template <class T>
void display(vector<T> &v) // Templatized Vector Function:-
{
    cout << "Displaying this Vector:-" << endl;
    for (int i = 0; i < v.size(); i++)
    {

        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

int main()
{
    // Ways to Create a Vector:-
    vector<int> vector_1;           // Zero Length Integer Vector;
    vector<char> vector_2(4);        // 4-Element Character Vector;
    vector_2.push_back('a');
    vector<char> vector_3(vector_2); // 4-Element Character Vector from Vector 2;
    vector<int> vector_4(6, 33);     // 6-Element Integer Vector of 3;
    cout << "Size: " << vector_4.size() << endl;

    // int element, size;
    // cout << "How many Integers you want in the Vector: " << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter an Element to Add to this Vector: " << endl;
    //     cin >> element;
    //     vector_1.push_back(element); // ---> It Adds data to the Vector;
    // }
    // vector_1.pop_back(); ---> It removes last Element;

    // Creating an Iterator:-
    // vector<int>::iterator iterator_1;
    // iterator_1 = vector_1.begin();
    // vector_1.insert(iterator_1 + 1, 10, 44);

    display(vector_4);
    return 0;
}