#include<iostream>
using namespace std;
class circle
{
    float radius;
    float area;
    float circumference;
    public:
    void setradius(int a)
    {
        radius=a;
    }
    void calculatearea()
    {
        area=3.141*radius*radius;
        cout<<"Area of circle which radius "<<radius<<" = "<<area<<endl;
    }
    void calculatecircumferance()
    {
        circumference=2*3.141*radius;
        cout<<"circumferance of circle which radius "<<radius<<" = "<<circumference<<endl;
    }
};

int main()
{
    circle c1,c2,c3;
    c1.setradius(6);
    c1.calculatearea();
    c1.calculatecircumferance();
    c2.setradius(3);
    c2.calculatearea();
    c2.calculatecircumferance();
    c2.setradius(4);

     return 0;
}