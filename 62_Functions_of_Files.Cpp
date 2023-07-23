#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int main()
{
    ofstream out;
    out.open("Sample62.txt");
    out << "Hi!" << endl;
    out << "Hey there I am using Vs Code" << endl;
    out << "Ki haal aey" << endl;
    out.close();

    ifstream in;
    string st, st2;
    in.open("Sample62.txt");
    // in >> st >> st2;
    // cout << st << endl << st2;

    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    in.close();
    return 0;
}