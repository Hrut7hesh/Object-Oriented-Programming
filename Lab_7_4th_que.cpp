#include <iostream>
using namespace std;
const int n=10;
template<class T>class Array
{
    public:
    T arr[n];
    void read()
    {
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    }
    void AO(){
        T temp;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]>arr[j]){
                    temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
    }
    void display(){
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main(){
    Array<int>a;
    cout<<"Enter the numbers of the kid hand : ";
    a.read();
    a.AO();
    cout<<"Arranging the Numbers in ascending order : ";
    a.display();
    cout<<"Submitted by G.Hruthesh Reddy, Admn.No20BCB7031"<<endl;
    return 0;
}
