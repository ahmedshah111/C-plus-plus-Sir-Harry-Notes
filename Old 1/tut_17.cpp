#include <iostream>
using namespace std;

// inline int product(int a, int b)
// {
//     return a*b;
// }
// int main()
// {
//     int a, b;
//     cout<<"Enter the value of a and b"<<endl;
//     cin>>a>>b;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;
//     cout<<"The product of a and b is "<<product(a,b)<<endl;

int product(int a, int b)
{
    //Do not recommend to use static with inline functions.
    // static int c = 0;  //This executes only once.
    // c = c + 1;   //Next time this function run,the value of c will be retained.
    // return a*b+c;
    // return a*b;
}
 
float Moneyrecieved(int Currentmoney, float factor = 1.04)
{
    return Currentmoney * factor;
}
int main()
{
    // int a, b;
    // cout<<"Enter the value of a and b"<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, you will recieve "
    <<Moneyrecieved(money)<<" Rs after 1 year."<<endl;
    
    cout<<"For VIP:If you have "<<money<<" Rs in your bank account, you will recieve "
    <<Moneyrecieved(money, 1.1)<<" Rs after 1 year."<<endl;
    
    // int strlen(const char *p)
    // {

    // }
    return 0;
} 