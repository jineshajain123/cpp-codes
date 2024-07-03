#include<iostream>
using namespace std;

class box {
    public:
    int length;
    int breadth;
    int height;

    public:
    box(int l,int b, int h):length(l),breadth(b),height(h)
    {
        
    }
    friend int calculatevolume(box b);
};
int calculatevolume(box b)
{
    return b.length * b.breadth * b.height;
}
int main()
{
    box box{5,4,3};
    cout<<"volume of box :"<<calculatevolume(box)<<endl;
    return 0;
}