//constructor
#include<iostream>
using namespace std;
class demo
{
    public:
    demo()
    {
        cout<<"this is 0 args construtor"<<endl;
    }
    demo(int a)
    {
        cout<<"this is 1 args construtor"<<endl;
    }
    demo(string a,int b)
    {
        cout<<"this is 2 args construtor"<<endl;
    }
};
int main()
{
    demo d1;
    demo d2(12);
    demo d3("jinesha",12);
    return 0;
}