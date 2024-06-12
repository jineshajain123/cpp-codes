#include<iostream>
using namespace std;

class emp
{
    public:
    string name;
    int id;
    string worktype;

    void setdata(string a,int b,string c)
    {
        name=a;
        id=b;
        worktype=c;
    }
    void display()
    {
        cout<<"Enter Employee information: "<<endl;
        cout<<"Enter Employee name : "<<name<<endl;
        cout<<"Enter Employee id : "<<id<<endl;
        cout<<"Enter Employee worktype : "<<worktype<<endl;
    }
};
class manager:public emp
{
    void managerdata(string a,int salary)
    {
        cout<<"Manager's stream": <<
        
    }
}

};
int main()
{
    return 0;
}