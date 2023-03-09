#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter total number of subjects: ";
    cin>>n;
    int* mark;
    mark=new int[n];
    cout<<"Enter the marks of Students: "<<endl;
    for(int i=0;i<n;++i){
        cout<<"Subject"<<i+1<<": ";
        cin>>*(mark+i);
    }
    cout<<"\nMarks of Student: "<<endl;
    for(int i=0;i<n;++i){
        cout<<"Subject"<<i+1<<" :"<<*(mark+i)<<endl;
    }
    delete[] mark;
    return 0;
}