#include<iostream>
using namespace std;
int grades()
{
    int grade1;
    int grade2;
}
template<typename T>
T Student(T grade1, T grade2)
{
    T cg=grade1+grade2;
    if(cg>8.0)
    cout<<"The student had secured first class"<<endl;
    else
    cout<<"The student had secured second class"<<endl;
}
int main()  
{
    Student(8.1,8.7);
    cout<<"Submitted by G.Hruthesh Reddy, Admn.No 20BCB7031"<<endl;
    return 0;
}