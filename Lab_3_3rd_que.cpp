#include <iostream>
using namespace std;
class Student
{
    public:
    string name;
    int Admn;
    void names();
    void no()
    {
        cout<<"Student Admn.no is: "<<Admn;
    }
};
void Student::names()
{
    cout<<"Student name is: "<<name;
}
int main(){
    Student obj;
    obj.name="Gelle Hruthesh Reddy";
    obj.Admn=7031;
    obj.names();
    cout<<endl;
    obj.no();
    cout<<"\nSubmitted by Gelle Hruthesh Reddy Admn.No 20BCB7031"<<endl;
    return 0;
}