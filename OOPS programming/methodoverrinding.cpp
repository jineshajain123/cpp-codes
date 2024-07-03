#include<iostream>
using namespace std;
class school
{
    public:
    string name;

    void display()
    {
        cout<<"name is jinesha :"<<name<<endl;

    }
};
class tenth: public school
{
    public:
    string name1;
    void displayA(string n1)
    {
        name1=n1;
        display();
        cout<<"class 10th jinesha surname is :"<<n1<<endl;
    }  

};
class eleventh: public tenth
{
    public:
    string name2;
    void displayB(string n2)
    {
        name2=n2;
        display();
        cout<<"class 11th jinesha surname is :"<<n2<<endl;
    }  

};
class tvelth: public eleventh
{
    public:
    string name3;
    void displayC(string n3)
    {
        name3=n3;
        display();
        cout<<"class 12th jinesha surname is :"<<n3<<endl;
    }  

};
int main()
{
    tvelth t1,t2,t3;
    
    t1.displayA("jain");
    t1.displayB("gupta");
    t1.displayC("sharma");
    return 0;
}