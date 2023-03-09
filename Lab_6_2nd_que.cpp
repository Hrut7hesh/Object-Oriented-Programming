#include<iostream>
using namespace std;
class student
{
 public:
 int rollno;
 string name;
 string branch;
 string gender;

void set_data()
{
    cout<<"\nenter the rollno of the student:"<<endl;
    cin>>rollno;
    cout<<"\nenter the name of the student:"<<endl;
    cin>>name;
    cout<<"\nenter the branch student enrolled:"<<endl;
    cin>>branch;
    cout<<"\nspecify the gender of the student:"<<endl;
    cin>>gender;
}
virtual void show()
{
    cout<<"\nthe rollno of the student is:"<<rollno<<endl;
    cout<<"\nthe name of the student:"<<name<<endl;
    cout<<"\nthe branch student enrolled:"<<branch<<endl;
    cout<<"\nthe gender of the student:"<<gender<<endl;
}
};

class hostel : public student
{
    public:
    int id;
    string sname;
    int roomno;
    int floorno;
    
    void insert()
    {
        cout<<"\nenter the id of the student:"<<endl;
        cin>>id;
        cout<<"\nenter student name"<<endl;
        cin>>sname;
        cout<<"\nenter the room number of the student:"<<endl;
        cin>>roomno;
        cout<<"\nenter the floorno of the student:"<<endl;
        cin>>floorno;
    }
    void show()
    {
        cout<<"\nthe id given of the stuendt:"<<id;
        cout<<"\nthe student name entered:"<<sname;
        cout<<"\nthe room no of the student is:"<<roomno;
        cout<<"\nthe floor no of the studnet:"<<floorno;
    }
};
int main()
{
student *s;
hostel h;
s=&h;
s->set_data();
h.insert();
s->show();
}