#include<iostream>
using namespace std;
class Employee
{
    public:
    virtual void set_details()=0;
};
class Manager : public Employee
{
    public:
    int id;
    string name;
    int experience;
    int salary;
    void set_details()
    {
        cout<<"Enter ID of the Manager : ";
        cin>>id;
        cout<<"Enter Name of the Manager : ";
        cin>>name;
        cout<<"Enter Experience in years of the Manager : ";
        cin>>experience;
        cout<<"Enter Salary of the Manager : ";
        cin>>salary;
    }
    void display()
    {
        cout<<"ID of the Manager : "<<id<<endl;
        cout<<"Name of the Manager : "<<name<<endl;
        cout<<"Experience of the Manager : "<<experience<<endl;
        cout<<"Salary of the Manager : "<<salary<<endl;
        cout<<"Submitted by G.Hruthesh reddy,Admn.no20BCB7031"<<endl;
    }
};
int main()
{
Employee *e;
Manager m;
e=&m;
e->set_details();
m.display();
}