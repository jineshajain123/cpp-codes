#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[5];
    cout<<"enter array elements :"<<endl;
    for (i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"array elements are :"<<endl;
    for (i=0;i<5;i++)
    {
        cout<<((arr[i]))<<endl;
    }
    int sum=0;
    for (i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<endl<<"sum is :"<<sum<<endl;

    return 0;
}

