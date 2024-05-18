#include<iostream>
using namespace std;

int maxelement(int arr[],int size)
{
    int max=arr[0];
    int i;
    for(i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}

int main()
{
    int i;
    int arr[5];
    int arr2[5];
    cout<<"enter first array elements :"<<endl;
     for (i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"array first elements are :"<<endl;
    for (i=0;i<5;i++)
    {
        cout<<((arr[i]))<<endl;
    }
    cout<<"enter second array elements :"<<endl;
     for (i=0;i<5;i++)
    {
        cin>>arr2[i];
    }
    cout<<"array second elements are :"<<endl;
    for (i=0;i<5;i++)
    {
        cout<<((arr2[i]))<<endl;
    }

    int res=maxelement(arr,5);
    cout<<"max element =" <<res<<endl;
    res=maxelement(arr2,5);
    cout<<"max element =" <<res<<endl;
    return 0;

}

    
