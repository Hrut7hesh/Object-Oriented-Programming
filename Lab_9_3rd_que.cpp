#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    fstream s;
    char name[50];
    int i;
    s.open("student.txt",ios::out);
    for(int i=0;i<10;i++)
    {
     cout<<"Enter the name of student : ";
      cin>>name;
      s<<name<<endl;
    }
    s.close();
    s.open("student.txt",ios::in);
    for(int i=0;i<10;i++)
    {
    s>>name;
    cout<<name<<endl;
    }
    s.close();
    cout<<"Enter two more Student names : "<<endl;
    s.open("student.txt",ios::app);
    for(int i=0;i<2;i++){
    cout<<"Enter the name of student : ";
    cin>>name;
    s<<name<<endl;
    }
    s.close();
    cout<<"Names of two more students are : "<<endl;
    s.open("student.txt",ios::in);
    for(int i=0;i<12;i++)
    {
    s>>name;
    cout<<name<<endl;
    }
    s.close();
    return 0;
}