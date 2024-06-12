#include<iostream>
using namespace std;
//class ke bahar function overloading hoti hai
//method overloading class k andar aati hai
void fun()
{
    cout<<"hello..this is fun with 0 args"<<endl;
}
void fun(int a)
{
    cout<<"hello..this is fun with 1 args"<<endl;
}
void fun(int a,float b)
{
    cout<<"hello..this is fun with 2 args"<<endl;
}
void fun(string c)
{
    cout<<"hello..this is fun with string args"<<endl;
}

int main()
{
    fun();
    fun(12);
    fun("jinesha");
    fun(12,10.4);    

    return 0;
}