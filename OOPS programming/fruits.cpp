#include<iostream>
using namespace std;

class fruits
{
    public:
    int fruits;
    void display(int fruits)
    {
        cout<<"number of total fruits in the basket :"<<fruits<<endl;

    }

};
class apple
{
    public:
    void displayapple(int apple)
    {
        cout<<"number of apples in the basket :"<<apple<<endl;
    }

};
class mango 
{
    public:
    void displaymango(int mango)
    {
        cout<<"number of mangoes in the basket :"<<endl;
    }

};
int main()
{
    fruits f1(),f2(),f3();
    apple a1,a2;
    mango m1,m2;
    
    

    return 0;
}