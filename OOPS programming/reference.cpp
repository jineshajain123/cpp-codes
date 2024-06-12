#include<iostream>
using namespace std;
void fun(int c=90)
{
    cout<<c<<endl;
}

int main()
{
    int a=12;
    int &b=a; //b is reference of a
    cout<<a<<endl;
    cout<<b<<endl;
    a=45;
    cout<<a<<endl;
    cout<<b<<endl;
    a=b=4; 
    cout<<a<<endl;
    cout<<b<<endl;
    fun();
    cout<<&b;
    return 0;
}