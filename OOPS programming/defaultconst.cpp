//default arguement in function
#include<iostream>
using namespace std;
void add(int a, int b=3) //arg b default
{
    cout<<"a + b = "<<(a+b)<<endl;
}
int main()
{
    add(2);
    return 0;
}

