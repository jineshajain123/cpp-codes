#include<iostream>
using namespace std;

void sum(int a=2,int b=8)
{
    cout<<"a+b = "<<(a+b)<<endl;
}
void display (int item,int price=1000)
{
    float bill=item*price;
    cout<<"total price :"<<bill<<endl;
}
int main()
{
    sum();
    display(5);

    return 0;
}