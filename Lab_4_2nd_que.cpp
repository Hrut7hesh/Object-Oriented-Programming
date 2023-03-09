#include<iostream>
#include<string.h>
using namespace std;

void bike(string bikename, string colour, int amount)
{
    cout<<"****Details of the first bike****"<<endl;
    cout<<"Name of the first bike: "<<bikename<<endl;
    cout<<"Colour of the first bike: "<<colour<<endl;
    cout<<"Price of the first bike: "<<amount<<endl;
}
void bike(string bikename, int amount)
{
    cout<<"****Details of the second bike****"<<endl;
    cout<<"Name of the second bike: "<<bikename<<endl;
    cout<<"Price of the second bike: "<<amount<<endl;
}
int main()
{
    string bikename1,bikename2;
    string colour1,colour2;
    int amount1,amount2;
    cout<<"Enter the name of the first bike: "<<endl;
    cin>>bikename1;
    cout<<"Colour of the first bike: "<<endl;
    cin>>colour1;
    cout<<"Enter the amount of the first bike: "<<endl;
    cin>>amount1;
    cout<<"Enter the name of the second bike: "<<endl;
    cin>>bikename2;
    cout<<"Enter the amount of the second bike: "<<endl;
    cin>>amount2;
    bike(bikename1,colour1,amount1);
    bike(bikename2,amount2);
    cout<<"Submitted by Gelle Hruthesh Reddy Admn.No 20BCB7031"<<endl;
    return 0;
}