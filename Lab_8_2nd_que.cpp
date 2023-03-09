#include<iostream>
using namespace std;
int main()
{
    int z;
    string s;
    int n;
    cout<<"Enter 1 to write number"<<endl;
    cout<<"Enter 2 to write a word"<<endl;
    cout<<"Select an option : ";
    cin>>n;
    try
    {
        if(n==1){
        cout<<"Enter a number : ";
        cin>>z;
        throw z;
        }
        else if(n==2){
        cout<<"Enter a word : ";
        cin>>s;
        throw s;
        }
        else{
            cout<<"Select the correct option"<<endl;
        }
    }
    catch(int z)
    {
        cout<<"Your number is "<<z<<endl;
    }
    catch(string s)
    { 
        cout<<"Your word is "<<s<<endl;
    }
    cout<<"Submitted by G.Hruthesh Reddy, Admn.No 20BCB7031"<<endl;
}