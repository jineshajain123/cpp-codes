//encapsulation 
/* it is defined as the wrapping up of data and information in a single unit. */
/* it is defined as binding together the data and the functions that manipulate them.*/
#include<iostream>
using namespace std;
class demo{
    public:
    int a,b; 
};
int main()
{
    demo d1,d2;
    d1.a=12;
    d1.b=60;
    cout<<d1.a<<endl;
    cout<<d1.b<<endl;
    return 0;
}
//setter method private
//getter method private