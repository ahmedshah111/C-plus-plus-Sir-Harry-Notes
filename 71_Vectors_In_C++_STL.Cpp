// #include <iostream>
// #include <vector>
// #include <string>

// using namespace std;

// template <class T>
// void display(vector<T> &v) // Templatized Vector Function:-
// {
//     cout << "Displaying this Vector:-" << endl;
//     for (int i = 0; i < v.size(); i++)
//     {

//         // cout << v[i] << " ";
//         cout << v.at(i) << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     // Ways to Create a Vector:-
//     vector<int> vector_1;     // Zero Length Integer Vector;
//     // vector<char> vector_2(4); // 4-Element Character Vector;
//     // vector_2.push_back('a');
//     // vector<char> vector_3(vector_2); // 4-Element Character Vector from Vector 2;
//     // vector<int> vector_4(6, 33);     // 6-Element Integer Vector of 3;
//     // cout << "Size: " << vector_4.size() << endl;

//     int element, size;
//     cout << "How many Integers you want in the Vector: " << endl;
//     cin >> size;
//     for (int i = 0; i < size; i++)
//     {
//         cout << "Enter an Element to Add to this Vector: " << endl;
//         cin >> element;
//         vector_1.push_back(element); // ---> It Adds data to the Vector;
//     }
//     // vector_1.pop_back(); // ---> It removes last Element;
//     // vector_1.emplace(vector_1.begin(), 10); // ---> It adds a new element as desired.

//     // Creating an Iterator:-
//     vector<int>::iterator iterator_1;
//     iterator_1 = vector_1.begin();
//     vector_1.insert(iterator_1 + 1, 10);
//     // vector_1.insert(iterator_1 + 1, 10, 44);

//     display(vector_1);
//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vec1, vec2;
    vec1 = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    // vec2 = {16, 17, 18, 19, 20};
    vector<int>::iterator it;
    cout << "Size before Resizing: " << vec1.size() << endl;
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    vec1.resize(5);
    vec1.shrink_to_fit();
    cout << endl << "vec1.resize(5): " << vec1.size() << endl;
    for (auto i = vec1.begin(); i != vec1.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl
         << "Size after Resizing: " << vec1.size() << endl;
    return 0;
}

// Most Commonly Used Vector Methods:-
// vec.at(i);             ---> Element Access ---> This function is used reference the element present at the position given as the parameter to the function.
// vec.front()            ---> Element Access ---> This function can be used to fetch the first element of a vector container.
// vec.back()             ---> Element Access ---> This function can be used to fetch the last element of a vector container.

// vec.begin()            ---> Iterator       ---> This function is used to return an iterator pointing to the first element of the vector container.
// vec.end()              ---> Iterator       ---> This function is used to return an iterator pointing next to last element of the vector container.
// vec.rbegin()           ---> Iterator       ---> This function Returns a reverse iterator pointing to the last element in the vector (reverse beginning). It moves from last to first element.
// vec.rend()             ---> Iterator       ---> This function Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector (considered as reverse end).

// vec.assign()           ---> Modifier       ---> This function assigns new values to the vector elements by replacing old ones. It can also modify the size of the vector if necessary.
// vec.push_back()        ---> Modifier       ---> This function is used to add new elements into a vector. The new value is inserted into the vector at the end, after the current last element and the container size is increased by 1.
// vec.pop_back()         ---> Modifier       ---> This function is used to remove elements from a vector. The value is removed from the vector from the end, and the container size is decreased by 1.
// vec.insert()           ---> Modifier       ---> This function inserts new elements before the element at the specified position, effectively increasing the container size by the number of elements inserted.
// vec.clear()            ---> Modifier       ---> This function is used to remove all the elements of the vector container, thus making it size 0.
// vec.erase()            ---> Modifier       ---> This function is used to remove elements from a container from the specified position or range.
// vec.swap()             ---> Modifier       ---> This function is used to swap the contents of one vector with another vector of same type and sizes of vectors may differ.
// vec.emplace()          ---> Modifier       ---> This function extends the container by inserting a new element at the position. Reallocation happens only if there is a need for more space. Here the container size increases by one.
// vec.emplace_back()     ---> Modifier       ---> This function is used to insert a new element into the vector container, the new element is added to the end of the vector.

// vec.empty()            ---> Capacity       ---> This function is used to check if the vector container is empty or not.
// vec.size()             ---> Capacity       ---> This function is used to return the size of the vector container or the number of elements in the vector container.
// vec.max_size()         ---> Capacity       ---> This function returns the maximum number of elements that can be held by the vector container.
// vec.capacity()         ---> Capacity       ---> This function returns the size of the storage space currently allocated for the vector, expressed in terms of elements. This capacity is not necessarily equal to the vector size.
//                                                 It can be equal to or greater, with the extra space allowing to accommodate for growth without the need to reallocate on each insertion. The capacity does not suppose a limit on the size of the vector.
//                                                 When this capacity is exhausted and more is needed, it is automatically expanded by the container (reallocating it storage space). The theoretical limit on the size of a vector is given by member max_size.
// vec.resize(n)          ---> Capacity       ---> The function alters the container’s content in actual by inserting or deleting the elements from it.If the given value of n is less than the size at present then extra elements are demolished.
//                                                 If n is more than current size of container then upcoming elements are appended at the end of the vector.
// vec.shrink_to_fit()(n) ---> Capacity       ---> The function reduces the capacity of the container to fit its size and destroys all elements beyond the capacity. 
// vec.reserve()          ---> Capacity       ---> The function helps user specify the minimum size of the vector. It indicates that the vector is created such that it can store at least the number of the specified elements without having to reallocate memory. 
