#include<iostream>
#include<string>
using namespace std;
int main()
{
    //string cities[]={"indore","ujjain","dewas"};
    string cities[5];
    int i;
    cout<<"cities name are :";
    for(i=0;i<5;i++)
    {
        //cout<<cities[i]<<endl;
        cin>>cities[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<"city name is :"<<cities[i]<<endl;
    }

    return 0;
}