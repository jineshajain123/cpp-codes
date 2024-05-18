//convert small letters into capital
#include<iostream>
using namespace std;
void uppercase(string a)
{
    
    int i;
    for(i=0;i<a[i]!='\0';i++)
    {
        if(a[i]>='a' && a[i]<='z')
        {
            a[i]=a[i]-32;
        }
    }
    cout<<a;
}
int main()
{
    uppercase("jinesha jain");
    return 0;
}