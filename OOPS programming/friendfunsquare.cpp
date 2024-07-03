#include<iostream>
using namespace std;

class square {
    private:
    int side;

    public:
    //constructor to intailize side
    square(int s): side(s)
    {
        
    }
    friend int calculateside(square s);
};
int calculateside(square s)
{
    return s.side *s.side;
}
int main()
{
    square s1(10);
    cout<<"area of square :"<<calculateside(s1)<<endl;
    return 0;
}