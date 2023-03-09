#include<iostream>
using namespace std;
class bus{
    public:
    string busname;
    int intime;
    string il;
    int outime;
    string ol;
    int seatno;
    string custname;
    int price;
    string ig;
    string og;
};
class Bus: public bus{
    public:
    void details(){
        cout<<"Enter the Name of the Bus : ";
        cin>>busname;
        cout<<"Starting time of bus : ";
        cin>>intime;
        cout<<"Starting location of bus : ";
        cin>>il;
        cout<<"Ending time of the journey : ";
        cin>>outime;
        cout<<"Last location of the journey : ";
        cin>>ol;
    }
};
class Cust: public bus{
    public:
    void details(){
        cout<<"Enter the seat Number of the passenger : ";
        cin>>seatno;
        cout<<"Enter the customer name : ";
        cin>>custname;
        cout<<"Enter the cost of the ticket : ";
        cin>>price;
        cout<<"Enter passenger starting location : ";
        cin>>ig;
        cout<<"Enter passenger ending location : ";
        cin>>og;
    }
};
int main(){
    bus b;
    Bus B;
    Cust c;
    B.details();
    c.details();
}