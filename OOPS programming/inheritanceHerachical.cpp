//herachical inheritance- 
#include<iostream>
using namespace std;
class student
{
    protected:
    string name;
    int rollno;
    public:
    
    void setdata(string s,int r)
    {
        name=s;
        rollno= r;
    }
    void display()
    {
        cout<<"name of student :"<<name<<endl;
        cout<<"rollno of student :"<<rollno<<endl;
    }
};

class mathstudent : public student
{
    int maths;
    int chemistry;
    int physics;
    public:
    void setmathdata(int m1,int m2,int m3)
    {
        maths=m1;
        chemistry=m2;
        physics=m3;
    }
    
    void displaymath()
    {
        display();
        cout<<"maths marks : "<<maths <<endl;
        cout<<"physics marks : "<<physics <<endl;
        cout<<"chemistry marks : "<<chemistry <<endl;
        cout<<"______________________________________"<<endl;
    }
};
class accountstudent : public student
{
    public:
    int account;
    int economic;
    int business;

    void setaccountdata(int c1,int c2,int c3)
    {
        account=c1;
        economic=c2;
        business=c3;
    }
    
    void displayaccount()
    {
        display();
        cout<<"account marks : "<<account <<endl;
        cout<<"economic marks : "<<economic <<endl;
        cout<<"business marks : "<<business <<endl;
        cout<<"______________________________________"<<endl;
    }
};
    class biostudent : public student
{
    public:
    int bio;
    int physics;
    int chemistry;


    void setbiodata(int s1,int s2,int s3)
    {
        bio=s1;
        physics=s2;
        chemistry=s3;
    }

    void displaybio()
    {
        display();
        cout<<"account marks : "<<bio <<endl;
        cout<<"business marks : "<<physics <<endl;
        cout<<"economic marks : "<<chemistry <<endl;
        cout<<"______________________________________"<<endl;
    }
};


int main()
{
    //student s1,s2;
    
    mathstudent m1,m2,m3;
    m1.setdata("jini",1001);
    m1.setmathdata(66,78,85);
    m1.displaymath();

    biostudent b1,b2,b3;
    b1.setdata("salo",1020);
    b1.setbiodata(78,89,99);
    b1.displaybio();

    accountstudent c1,c2,c3;
    c1.setdata("kimi",1025);
    c1.setaccountdata(88,85,49);
    c1.displayaccount();
    return 0;
}