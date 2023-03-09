#include<iostream>
using namespace std;

class Product
{
    public:
    int id=6749;
    string productname="Good_day";
    string qty="10";
    int price=10;
    int ta=price*qty;
    void details()
    {
        cout<<"****Product details****"<<endl;
        cout<<"ID of the product : "<<id<<endl;
        cout<<"Product name : "<<productname<<endl;
        cout<<"Quantity : "<<qty<<endl;
        cout<<"Price : "<<price<<endl;
        cout<<"Total Price : "<<ta<<endl;
    }
};
class Seller : public Product
{
    public :
    string sellername="Ramesh";
    string l="Vijayawada";
    int sellerid=1234;
    void sellerdetails()
    {
        cout<<"****Seller details****"<<endl;
        cout<<"Seller ID : "<<sellerid<<endl;
        cout<<"Seller name : "<<sellername<<endl;
        cout<<"Location : "<<l<<endl;
        cout<<"Submitted by G.Hruthesh Reddy,Admn.No.20BCB7031"<<endl;
    }    
};
int main()
{
    Product p;
    Seller s;
    p.details();
    s.sellerdetails();
}
