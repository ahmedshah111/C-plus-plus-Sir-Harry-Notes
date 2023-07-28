#include <iostream>
#include <list>

using namespace std;

void display(list<int> &list_1)
{
    list<int>::iterator iter_1;
    for (iter_1 = list_1.begin(); iter_1 != list_1.end(); iter_1++)
    {
        cout << *iter_1 << " ";
    }
    cout << endl;
}

int main()
{
    list<int> list_1; // List of 0 Length
    list_1.push_back(5);
    list_1.push_back(7);
    list_1.push_back(1);
    list_1.push_back(9);
    display(list_1);

    // Removing Elements from the List;
    // list_1.pop_back(); // ---> It removes last element;
    // list_1.pop_front(); // ---> It removes first element;
    // list_1.remove(7);  // ---> It removes what is given;

    // Sorting the List;
    // list_1.sort();
    // display(list_1);

    // Reversing the List;
    list_1.reverse();
    display(list_1);

    list<int> list_2(3); // Empty list of Size 3;
    list<int>::iterator iter_2;
    iter_2 = list_2.begin();
    *iter_2 = 30;
    iter_2++;
    *iter_2 = 20;
    iter_2++;
    *iter_2 = 70;
    iter_2++;
    display(list_2);

    // Merging and Sorting The List;
    list_1.sort();
    list_2.sort();
    list_1.merge(list_2);
    cout << "List_1 after Merging:-" << endl;
    display(list_1);
    return 0;
}