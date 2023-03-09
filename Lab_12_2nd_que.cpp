#include<iostream>
using namespace std;
class Parcel{
    public:
    string customer;
    string location;
    int price;
    string product;
    string deliveryperson;
    int t;
    int temp;
};
class user : public Parcel{
    public:
    void details(){
    cout<<"Enter the customer name : ";
    cin>>customer;
    cout<<"Enter the delivery location : ";
    cin>>location;
    cout<<"Enter the Item ordered by customer : ";
    cin>>product;
    cout<<"Enter the Price paid by the Customer : ";
    cin>>price;
    }
};
class Delivery : public user{
    public:
    void details(){
    cout<<"Enter the name of Delivery person : ";
    cin>>deliveryperson;
    cout<<"Enter the temperature in celsius : ";
    cin>>temp;
    cout<<"Enter time taken by Delivery person : ";
    cin>>t;
    if(t<=30){
        cout<<"Price should be paid"<<endl;
    }
    else{
        cout<<"Price is not paid because time limit has passed"<<endl;
    }
    }
};
int main(){
    Parcel p;
    user u;
    Delivery d;
    u.details();
    d.details();
    cout<<"Submitted by G.Hruthesh Reddy,Admn.No 20BCB7031"<<endl;
}
