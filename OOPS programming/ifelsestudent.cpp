#include<iostream>
using namespace std;
class student 
{
    //public
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
    void displayresult()
    {
        cout<<"student result..."<<endl;
        cout<<"student name ="<<name<<endl;
        cout<<"student rollno ="<<rollno<<endl;
        cout<<"student per ="<<per<<endl;
        if(per>=3)
        {
            cout<<"student fail :"<<name<<endl;
        }
        else
        {
            cout<<"student pass :"<<name<<endl;
        }
    }

};
int main()
{
    student s1,s2,s3;
    s1.setstudentdata("jinesha",1054,8.2);
    s2.setstudentdata("karnika",1056,8.8);
    s3.setstudentdata("muskan",1055,3.0);
    s1.displayresult();
    s2.displayresult();
    s3.displayresult();
    
    return 0;
}