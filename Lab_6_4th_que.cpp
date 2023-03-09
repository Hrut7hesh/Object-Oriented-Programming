#include<iostream>
using namespace std;
class Vehicle
{
    public:
    virtual void show()=0;
};
class Bike : public Vehicle
{
    public:
    string brand;
    int price;
    string color;
    void set_details()
    {
        cout<<"Enter Brand of the Bike : ";
        cin>>brand;
        cout<<"Enter Color of the Bike(only in lowers) : ";
        cin>>color;
        if(color=="green"){
            cout<<"Price of the Bike : 75000"<<endl;
            price=75000;
        }
        else if(color=="red"){
            cout<<"Price of the Bike : 80000"<<endl;
            price=80000;
        }
        else{
            cout<<"Price of the Bike : 70000"<<endl;
            price=70000;
        }
    }
    void show()
    {
        cout<<"Brand of the Bike : "<<brand<<endl;
        cout<<"Color of the Bike : "<<color<<endl;
        cout<<"Price of the Bike : "<<price<<endl;
        cout<<"Submitted by G.Hruthesh reddy,Admn.no20BCB7031"<<endl;
    }
};
int main()
{
Vehicle *v;
Bike b;
v=&b;
b.set_details();
v->show();
}