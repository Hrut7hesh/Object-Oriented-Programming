#include<iostream>
using namespace std;
class Mobile{
    public:
    int purchase;
    int sales;
    string brand;
    void details(){
        int n;
        cout<<"Enter Number of brands in showroom : ";
        cin>>n;
        int i;
        for(i=0;i<n;i++){
        cout<<"Enter the Brand of the Mobile phone : ";
        cin>>brand;
        cout<<"Enter the sold out stock of the phone : ";
        cin>>purchase;
        cout<<"Enter the stock of the phone : ";
        cin>>sales;
        int rstock;
        rstock=sales-purchase;
        cout<<"Remaining stock for "<<brand<<" is : "<<rstock<<endl;
        }
    }
};
int main()
{
    Mobile m;
    m.details();
    cout<<"Submitted by G.Hruthesh Reddy,Admn.No 20BCB7031"<<endl;
}