#include<iostream>
using namespace std;
class demo
 
{
    int a,b; //non static variable(instance variable)
    static int c,d; //(class variable) static variable
    public:
    void setdata(int r,int s,int t,int u)//local variable
    {
        a=r;//local variable
        b=s;
        c=t;
        d=u;
    }
    void display()
    {
        cout<<"a ="<<a<<endl;
        cout<<"b ="<<b<<endl;
        cout<<"c ="<<c<<endl;
        cout<<"d ="<<d<<endl;
    }
    
};
int demo::c=1001;
int demo::d=1002;

int main()
{
    demo d1,d2,d3;
    d1.setdata(12,13,111,222);
    d2.setdata(14,15,333,555);
    d3.setdata(16,17,444,666);
    d1.display();
    d2.display();
    d3.display();

}