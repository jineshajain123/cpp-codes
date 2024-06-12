#include<iostream>
using namespace std;
class student 
{
    public:
    string name;
    int rollno;
    float per;
    public:
    void setstudentdata(string s,int a ,float b)
    {
        name=s;
        rollno=a;
        per=b;
    }
    void display()
    {
        cout<<"student information..."<<endl;
        cout<<"student name ="<<name<<endl;
        cout<<"student rollno ="<<rollno<<endl;
        cout<<"student per ="<<per<<endl;
        cout<<"..............................."<<endl;
    }
    static void average(student obj1 ,student obj2)
    {
        float avg;
        avg=(obj1.per+obj2.per)/2.0;
        cout<<"Average of "<<obj1.per<<" and "<<obj2.per <<" is : "<<avg<<endl;
    }
    static void average(student obj1 ,student obj2,student obj3)
    {
        float avg;
        avg=(obj1.per+obj2.per+obj3.per)/3.0;
        cout<<"Average of "<<obj1.per<<" and "<<obj2.per <<" and "<<obj3.per <<" is : "<<avg<<endl;
    }

};


int main()
{
    
    student s1,s2,s3;
    s1.setstudentdata("jinesha",1054,8.2);
    s2.setstudentdata("karnika",1056,4.8);
    s3.setstudentdata("muskan",1055,8.0);
    s1.display();
    s2.display();
    s3.display();
    s1.average(s2,s1);
    s1.average(s2,s3);
    student::average(s1,s2,s3);
    return 0;
}