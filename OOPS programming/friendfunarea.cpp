#include<iostream>
using namespace std;

class garden {
    private:
    int length;
    int breadth;

    public:
    garden(int l,int b):length(l),breadth(b)
    {
        
    }
    friend int calculatearea(garden b);
};
int calculatearea(garden b)
{
    return b.length * b.breadth;
}
int main()
{
    garden g1(20,10);
    cout<<"area of garden :"<<calculatearea(g1)<<endl;
    return 0;
}