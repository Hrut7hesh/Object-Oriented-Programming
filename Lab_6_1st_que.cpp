#include<iostream>
using namespace std;

class Reservation
{
    public:
    int pnr;
    string name;
    int age;
    string gender;
    void set_details()
    {
        cout<<"Enter name : ";
        cin>>name;
        cout<<"Enter PNR number : ";
        cin>>pnr;
        cout<<"Enter age : ";
        cin>>age;
        cout<<"Enter gender : ";
        cin>>gender;
    }
    virtual void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
    void print()
    {
        cout<<"PNR number is : "<<pnr<<endl;
        cout<<"Gender is : "<<gender<<endl;
    }
};
class Passanger : public Reservation
{
    public :
    string userid;
    string password;
    void set_details()
    {
        cout<<"Enter User ID : ";
        cin>>userid;
        cout<<"Enter password : ";
        cin>>password;
    }
    void display()
    {
        cout<<"User ID is:"<<userid<<endl;
    }
    void print()
    {
        cout<<"Password is:"<<password<<endl;
    }
};
int main()
{
    Passanger p;
    Reservation *r;
    r=&p;
    r->set_details();
    p.set_details();
    r->display();
    r->print();
}