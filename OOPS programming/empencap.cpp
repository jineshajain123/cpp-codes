#include<iostream>
using namespace std;

class employee
{
    private:
    string name:"jinesha";
    int salary:80000;
    int contact:8815131625;
}

employee(string n,int s,int c :name(n),salary(s),contact(c)
{
    
}

{
    cout<<"emp name :"<<n<<endl;
    cout<<"emp salary :"<<s<<endl;
    cout<<"emp contact no.:"<<c<<endl;
};
int main()
{
    employee emp1;
    return 0;
}