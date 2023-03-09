#include<iostream>
using namespace std;
int main()
{
    int a[100],s,i,temp;
    cout<<"Enter the number of students : ";
    cin>>s;
    for(i=0;i<s;i++){
        cout<<"Time taken(in seconds) by the Student Number "<<i+1<<" : ";
        cin>>a[i];
    }
    int min=a[0];
    for(i=0;i<s;i++){
        for(int j=0;j<s;j++)
        {
            if(a[j]>a[i])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
    cout<<"The Room No. "<<i+1<<" is alloted to Student who completed in : "<<a[i]<<" seconds "<<endl;
    }
    cout<<"Submitted by G.Hruthesh Reddy,Admn.No 20BCB7031"<<endl;
}
