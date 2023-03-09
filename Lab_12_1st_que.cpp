#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Scheme you wanted to know in below option"<<endl;
    cout<<"1.Digital India"<<endl;
    cout<<"2.Pradhan Mantri Gramin Awaas Yojana"<<endl;
    cout<<"3.Smart cities Mission"<<endl;
    cout<<"Enter your option : ";
    cin>>n;
    if(n==1){
        cout<<"****Results of Digital India****"<<endl;
        cout<<"Ministry of Electronics and Information Technology is the ministry of the scheme"<<endl;
        cout<<"It was launched on 1 July 2015"<<endl;
        cout<<"It aims to ensure that government services are available to citizens electronically and people get benefits from the latest information and communication technology."<<endl;
    }
    else if(n==2){
        cout<<"****Results of Pradhan Mantri Gramin Awaas Yojana****"<<endl;
        cout<<"Ministry of Rural Development is the ministry of the scheme"<<endl;
        cout<<"It was launched on 1985 and Restructured on 25 June 2015"<<endl;
        cout<<"Provides financial assistance to rural poor for constructing their houses themselves."<<endl;
    }
    else if(n==3){
        cout<<"****Results of Smart cities Mission****"<<endl;
        cout<<"Ministry of Housing and Urban Affairs is the ministry of the scheme"<<endl;
        cout<<"It was launched on 25 June 2015"<<endl;
        cout<<"To enable better living and drive economic growth stressing on the need for people centric urban planning and development."<<endl;
    }
    else{
        cout<<"Please choose the correct option and try again"<<endl;
    }
    cout<<"Submitted by G.Hruthesh Reddy,Admn.No 20BCB7031"<<endl;
}