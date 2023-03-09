#include<iostream>
using namespace std;
class Plants{
    public:
    string plant_name;
    int life_time;
    void set_details(string pn,int lt){
    plant_name=pn;
    life_time=lt;
}
void Info(){
    cout<<"Enter the Plant name :";
    cin>>plant_name;
    cout<<"Enter the Life time :";
    cin>>life_time;
}
void display(){
        cout<<"****Plant Information****"<<endl;
        cout<<"Plant Name : "<<plant_name<<endl;
        cout<<"Life time of plant : "<<life_time<<endl;
}
};
class Crotons:public Plants{
    public:
    int price;
    int qty;
    int ta;
void set_loan(int p,int q){
    price=p;
    qty=q;
}
void Infor(){
    cout<<"Enter the Price :";
    cin>>price;
    cout<<"Enter the Quantity :";
    cin>>qty;
    ta=price*qty;
}
};
class Discount:public Crotons{
    public:
    int p;
    void discount_details(){
        if(ta>1000){
            p=ta/20;
            ta=ta-p;
            cout<<"Price of the Plant is "<<ta<<endl;
        }
        else{
            cout<<"Total Amount is "<<ta<<endl;
        }
    }
};
int main(){
    Discount d;
    d.Info();
    d.display();
    d.Infor();
    d.discount_details();
    cout<<"Submitted by Gelle Hruthesh Reddy, Admn .No 20BCB7031"<<endl;
    return 0;
}