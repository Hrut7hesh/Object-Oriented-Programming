#include <iostream>
using namespace std;
int main()
{
    int m[5];
    cout<<"Enter the marks of the students : "<<endl;
    for(int i=0;i<5;i++){
        cin>>m[i];
    }
    for(int i=0;i<5;i++)
    {
        int tm=m[i];
        try
        {
            if(tm>=65)
            cout<<"The mark of the student is : "<<tm<<endl;
            else
            throw tm;
        }
        catch(int tm)
        {
            cout<<"The mark of the student is less than 65"<<endl;
        }
    }
    cout<<"Submitted by G.Hruthesh Reddy,Admn.No 20BCB7031"<<endl;
}
