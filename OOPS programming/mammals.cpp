#include<iostream>
using namespace std;
class mammals
{
    public:
    void mammaldisplay(string mammals)
    {
        cout<<"i am mammals"<<endl;
    }
};

class marinemammals: public bluewhale 
{           
    public: 
    void marinemammalsdispaly(string marinemammals)
    {
        cout<<"i am  marine mammals"<<endl;
    }
};

class bluewhale: public mammals,public marinemammals
{
    public:
    void bluewdisplay(string bluewhale)
    {
        cout<<"i belong to both mammals as well as marine "<<endl;
    }
};
int main()
{
    mammals maml;
    marinemammals mar;
    bluewhale blue;

    maml.mammaldisplay("sea animal");
    //mar.marinemammalsdisplay("blue"); 
    blue.bluewdisplay("whale");

    return 0;
}