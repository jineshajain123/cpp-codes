#include<iostream>
using namespace std;
int main()
{
    string s,s1;
    cout<<"size of string:"<<sizeof(s)<<endl;
    cout<<"enter a name :";
    //cin>>s;  its take single word
    getline(cin,s1);// its take sentance in input
    cout<<"name = "<<s1; 
    return 0;

}
    
