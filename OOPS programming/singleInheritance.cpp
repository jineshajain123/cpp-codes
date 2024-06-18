#include<iostream>
using namespace std;
class calculator 
{
    public:
    int num1,num2;
    int add,sub,mul,divd;
    /*void setdata(int a ,int b)
    {
        num1=a;
        num2=b;
    }*/
    void display ()
    {
        cout<<"hello this is calculator!"<<endl;
        cout<<"Enter the first digit :"<<endl;
        cin>>num1;
        cout<<"Enter the second digit :"<<endl;
        cin>>num2;
    }
   
};
class cal : public calculator
{
    public:
    void adddisp()
    {
        display();
        int add;
        add=num1+num2;
        cout<<"addition of two values is : "<<add<<endl;
    
    }
    void subdisp()
    {
        display();
        int sub;
        sub=num1-num2;
        cout<<"subtration of two values is : "<<sub<<endl;
    }
    void muldisp()
    {
        display();
        int mul;
        mul=num1*num2;
        cout<<"multiplication of two values is : "<<mul<<endl;
    }
    void divddisp()
    {
        display();
        int divd;
        divd=num1/num2;
        cout<<"division of two values is : "<<divd<<endl;
    }
    
};


int main()
{
    calculator s1,s2,s3;
    cal c1,c2,c3,c4;

    c1.adddisp();
    
    c2.subdisp();

    c3.muldisp();

    c4.divddisp();

    
    return 0;
}