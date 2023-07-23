#include <iostream>

using namespace std;

class Data
{
private:
    int data_1, data_2, data_3;

public:
    Data(int x, int y = 56, int z = 35)
    {
        data_1 = x;
        data_2 = y;
        data_3 = z;
    }
    void print_data();
};

void Data ::print_data()
{
    cout << "The value of Data1, Data2 and Data3 is: " << data_1 << " and " << data_2 << " and " << data_3 << endl;
}

int main()
{
    Data d1(2);
    d1.print_data();
    return 0;
}