#include<iostream>
using namespace std;
int i,j;
int main()
{
    int i=0;
    while(i<5)
    {
        int j=0;
        while (j<5)
        {
            cout<<"*  ";
            j++;
        };
        cout<<endl;
        i++;
    }

    return 0;
}