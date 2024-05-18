#include<iostream>
using namespace std;
char fun(float a)
{
    return (a+5);
}
int main()
{
    int a=fun(40.78);
    cout<<a;
    return 0;
}