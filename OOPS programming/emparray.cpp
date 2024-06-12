#include<iostream>
using namespace std;
class emp
{
    string name;
    int id;
    public:
    void setdata(int,string);
    void display();
    
    
void emp ::setdata() //:: scoperesolution operator
{
    cout<<"emp id :"<<id<<endl;
    cin>>id;
    cout<<"emp name :"<<name<<endl;
    cin>>name;
    
}
void emp ::display()
{
    cout<<"emp information: "<<endl;
    cout<<"emp id :"<<id<<endl;
    cout<<"emp name :"<<name<<endl;
}
};

int main()
{
    emp e[5];
    int i;
    for(i=0;i<5;i++)
    {
        e[i].setdata();
    }
    for(i=0;i<5;i++)
    {
        e[i].display();
    }
    
    return 0;
}