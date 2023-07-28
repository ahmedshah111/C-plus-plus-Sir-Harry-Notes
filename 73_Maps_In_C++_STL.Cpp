#include <iostream>
#include <map>
#include <string>

using namespace std;

int main()
{
    // Map is an Associative Array;
    map<string, int> marks_1;
    marks_1["Ahmed"] = 65;
    marks_1["Haider"] = 80;
    marks_1["Ayesha"] = 99;
    marks_1.insert({"Alan", 56});
    map<string, int>::iterator iter;
    for (iter = marks_1.begin(); iter != marks_1.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout << "The Size is: " << marks_1.size() << endl;
    cout << "The Max Size is: " << marks_1.max_size() << endl;
    cout << "The Empty's Return value is: " << marks_1.empty() << endl;
    return 0;
}