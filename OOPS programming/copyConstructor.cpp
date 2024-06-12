#include<iostream>
using namespace std;
class numbers
{
    public:
    int num1;
    int num2;

    numbers (int a,int b)
    {
        num1=a;
        num2=b;
        
    }
    numbers (numbers &obj)
    {
        cout<<"copy constructor called"<<endl;
        num1=obj.num1+2;
        num2=obj.num2+3;
    }
    void display()
    {
        cout<<"table of 2 and 3 : "<<num1<<" , "<<num2<<endl;
    }
};
int main()
{
    numbers n1(2,3),n2(n1),n3(n2),n4(n3),n5(n4),n6(n5),n7(n6),n8(n7),n9(n8),n10(n9);
    n1.display();
    n2.display();
    n3.display();
    n4.display();
    n5.display();
    n6.display();
    n7.display();
    n8.display();
    n9.display();
    n10.display();
    return 0;
}