#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Connecting our File with out Stream;
    ofstream out("Sample60b.txt");

    // Creating a Name String and Filling it with the String Entered by the User.
    string name;
    cout << "Enter your Name: " << endl;
    cin >> name;

    // Writing a String to the File;
    out << name;
    out.close();

    // Reading a String from the File;
    ifstream in("Sample60b.txt");
    string content;
    // in >> content;
    getline(in, content);
    cout << "The Content of this File is: " << content << endl;
    in.close();
    return 0;
}