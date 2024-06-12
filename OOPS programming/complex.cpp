#include<iostream>
using namespace std;

class complex
{
    int real;
    int image;
    public:
    void setdata (int a,int b)
    {
        real=a;
        image=b;

    }
    void display ()
    {
        cout<<"complex number is :"<<real<<" + " <<image<<"i"<<endl;
        
    }
    void sum(complex obj)
    {
        int r=real+obj.real;
        int i=image+obj.image;
        cout<<"sum of complex no. :"<<r<<" + " <<i<< "i"<<endl;
    }
};
 
int main()
{
    complex c1,c2;
    c1.setdata(12,3);
    c2.setdata(6,8);
    c1.display();
    c2.display();
    c1.sum(c2);
    
    return 0;
}