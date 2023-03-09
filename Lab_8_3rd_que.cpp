#include <iostream>
using namespace std;
int main()
{
    int d[5];
    cout<<"Enter the Income of the shopkeeper daywise : "<<endl;
    for(int i=0;i<5;i++){
        cin>>d[i];
    }
    int tm=0;
    try
    {
        for(int i=0;i<5;i++){
            tm +=d[i];
        }
        if(tm<50000){
            throw tm;
        }    
        else{
            cout<<"The Total income of five days : "<<tm<<endl;
        }
    }
    catch(int tm)
    {
        cout<<"The Total income of the shopkeeper is less than 50000"<<endl;
    }
    try
    {
        int avg=tm/5;
        if(avg<7500){
            throw avg;
        }
        else{
            cout<<"The Average income of five days : "<<avg<<endl;
        }
    }
    catch(int avg)
    {
        cout<<"The Average income of the shopkeeper is less than 7500"<<endl;
    }
    cout<<"Submitted by G.Hruthesh Reddy,Admn.No 20BCB7031"<<endl;
}
