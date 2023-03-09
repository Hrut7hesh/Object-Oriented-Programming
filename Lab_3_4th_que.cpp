#include<iostream>
using namespace std;
class student
{
    public:
        int rollno;
        string name;
        int marks[5];
        void mark()
        {
            int n,m;
            cout<<"Enter total number of students: ";
            cin>>n;
            for(int i=0;i<n;i++){
            cout<<"Enter Roll Number: "<<endl;
            cin>>rollno;
            cout<<"Enter Name of the student: "<<endl;
            cin>>name;
            cout<<"Enter No of Subjects"<<endl;
            cin>>m;
            cout<<"Enter the marks of student: "<<endl;
            for(int i=0;i<m;i++)
            {
                cout<<"Subject"<<i+1<<": ";
                cin>>marks[i];
            }
            }
        }
};
int main()
{
    student s;
    s.mark();
    cout<<"Submitted by Gelle Hruthesh Reddy Admn No 20BCB7031"<<endl;
    return 0;
}