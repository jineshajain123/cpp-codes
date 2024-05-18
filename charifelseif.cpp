#include<iostream>
using namespace std;
int main()
{
    char var;
    cout<<"enter a variable :";
    cin>>var;
    cout<<"value of var :"<<var <<endl;
    if (var>='a' && var<='z')
    {
        cout<<"variable is alphabet "<<endl;
    }
    else if (var>='0' && var<='9')
    {
        cout<<"variable is a digit "<<endl;
    }
    else{
        cout<<"please enter alphabet or digit only";
    }
    return 0;
}
