#include<iostream>
using namespace std;
class pen
{
   string name;
   int rate;
   string colour;
   int price;
   public:
   void Setdata(string n,string c,int p)
   {
    name=n;
    colour=c;
    price=p;
   }
   void display()
    {
      cout<<"name of pen :"<<name<<endl;
      cout<<"colour of pen :"<<colour<<endl;
      cout<<"price of pen :"<<price<<endl;
    }
};

int main()
{
    cout<<"pen details..."<<endl;
    pen p1,p2,p3;
    p1.Setdata("ball","black",10);
    p2.Setdata("gel","blue",20);
    p3.Setdata("marker","red",25);
    p1.display();
    p2.display();
    p3.display();
    return 0;
}