#include<iostream>
using namespace std;

class Vehical
{
    
    public:
    string name;
    int tyre;
    string fuel;
    void data(string a,int b,string c)
    {
        name=a;
        tyre=b;
        fuel=c;
    }
    void display()
    {
        cout<<"vehical name : "<<name<<endl;
        //cin>>car;
        cout<<"No. of tyres :"<<tyre<<endl;
        //cin>>tyre;
        cout<<"fuel :"<<fuel<<endl;
        //cin>>fuel;
        cout<<"___________________________________________________"<<endl;
    }
        

};
class car :public Vehical
{
    public:
    string car;
    string name;

    void cardata(string a,string b)
    {
        car=a;
        name=b;
    }
    void cardisplay()
    {
        display();
        cout<<"model of car : "<<car<<endl;
        cout<<"is car automatic : "<<name<<endl;
        cout<<"___________________________________________________"<<endl;
    }
};
class sprotscar :public car
{
    public:
    int price;
    string colour;
    int seats;
    int average;

    void Scardata(int a,string b,int c,int d)
    {
        price=a;
        colour=b;
        seats=c;
        average=d;
    }
    void Scardisplay()
    {
        cout<<"price : "<<price<<endl;
        cout<<"car's colour : "<<colour<<endl;
        cout<<"no. of seats : "<<seats<<endl;
        cout<<"average : "<<average<<endl;
        cout<<"___________________________________________________"<<endl;
    }
};

int main()
{
    car c1,c2;
    c1.data("Alto",4,"petrol");
    c1.cardata("k10","red");
    c1.cardisplay();
    c2.data("grand vitara",4,"diesal");
    c2.cardata("delta plus","black");
    //c2.display();
    c2.cardisplay();
    sprotscar s1,s2;
    s1.Scardata(9000000,"yellow",2,14);
    s1.Scardisplay();
    s2.Scardata(5000000,"black",4,17);
    s2.Scardisplay();
    return 0;
}