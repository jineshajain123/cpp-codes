#include<iostream>
using namespace std;
class demo
{
    public:
    demo(int a,int b)
    {
        cout<<"this is constructor"<<endl;
    }
              
    ~demo()
    {
        cout<<"this is destructor"<<endl;
    }
};
int main()
{
    demo d1(12,4);
    return 0;
}