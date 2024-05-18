#include<iostream>
using namespace std;
int main()
{
    int num,sum,a,b,c;
    cout<<"enter a num :";
    cin>>num;
    a=num/100;
    b=(num%100)/10;
    c=num%10;
    sum=a+b+c;
   cout<<"sum of individual digit of  :"<<num<<" = "<<sum<<endl;
   
    cin>>b;
    sum=a+b;
    cout<<"sum is:"<<sum;
    return 0;
}