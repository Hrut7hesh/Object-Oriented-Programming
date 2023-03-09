#include<iostream>
using namespace std;
class Car{
    string car_brand;
    string color;
    int price;
    public:
       friend void Discount(Car r);
       void set_details(string cb,string c,int p);
};
void Car::set_details(string cb,string c,int p){
    car_brand=cb;
    color=c;
    price=p;
}
void Discount(Car r){
    int n;
    cout<<"Enter total number of cars detail you want to give :";
    cin>>n;
    string TATA;
    for(int i=0;i<n;i++){
    cout<<"Name of the Car(Only in Capitals) : ";
    cin>>r.car_brand;
    cout<<"Color of the Car : ";
    cin>>r.color;
    cout<<"Price of the Car : ";
    cin>>r.price;
    cout<<"******Car Information*******"<<endl;
    cout<<"Name of th Car : "<<r.car_brand<<endl;
    if(r.car_brand=="TATA")
    {
        cout<<"As you selected TATA car"<<endl;
        cout<<"The Discount Price of the Car is "<<r.price-r.price*10/100<<endl;
    }
    else
    {
        cout<<"Price of the Car is "<<r.price<<endl;
    }
    cout<<"Color of the Car : "<<r.color<<endl;
    }
    cout<<"Submitted by Gelle Hruthesh Reddy, Admn .No 20BCB7031"<<endl;
}
int main(){
    Car r;
    Discount(r);
    return 0;
}
