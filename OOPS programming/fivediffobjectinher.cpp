#include<iostream>
using namespace std;

class school
{
    public:
    
    school(string name)
    {
        
        cout<<"student name : "<<name<<endl;
    }
};
int main()
{
    school s1("ram"),s2("shyam"),s3("jini"),s4("salo"),s5("nonu");
    return 0;
}