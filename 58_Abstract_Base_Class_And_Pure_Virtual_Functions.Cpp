#include <iostream>
#include <cstring>

using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // Do - Nothing Function ---> Pure Virtual Function ---> Interface;
};

class CWHVideo : public CWH
{
    float Video_length;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        Video_length = vl;
    }
    void display()
    {
        cout << "This Video is Amazing: " << title << endl;
        cout << "Rating: " << rating << " Out of 5 Star" << endl;
        cout << "Length of this Video is: " << Video_length << " min" << endl;
        cout << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "This Text Tutorial is Amazing: " << title << endl;
        cout << "Rating: " << rating << " Out of 5 Star" << endl;
        cout << "No. of Words in this Text Tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vid_len;
    int words;

    // For CodewithHarryVideo:-
    title = "Python Tutorial";
    rating = 4.5;
    vid_len = 5.5;
    CWHVideo Pyt_Video(title, rating, vid_len);
    // Pyt_Video.display();

    // For CodewithHarryText:-
    title = "Python Text Tutorial";
    rating = 3.9;
    words = 467;
    CWHText Pyt_Text(title, rating, words);
    // Pyt_Text.display();

    // Making Pointers of Objects of Classes;
    CWH *Tutorials[2];
    Tutorials[0] = &Pyt_Video; // Pointer Pointing to the Object of Class CWHVideo;
    Tutorials[1] = &Pyt_Text;  // Pointer Pointing to the Object of Class CWHText;

    Tutorials[0]->display();
    Tutorials[1]->display();
    return 0;
}

// Abstract Base Class:-
// 1. An abstract class is a class that is designed to be specifically used as a base class. 
// 2. An abstract class contains at least one pure virtual function. 
// 3. We can declare a pure virtual function by using a pure specifier ( = 0 ) 
//    in the declaration of a virtual member function in the class declaration.