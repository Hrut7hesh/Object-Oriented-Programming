#include<iostream>
using namespace std;
template<class T> class seller
{
    public:
    T quantity;
    T price;
    void total_amount()
    {
        cout<<"Enter the quantity of Product : ";
        cin>>quantity;
        cout<<"Enter the price of Product : ";
        cin>>price;
        cout<<"Total Amount for selling products : "<<quantity*price<<endl;
    }
};
int main()
{
    seller<int>s;
    s.total_amount();
    cout<<"Submitted by G.Hruthesh Reddy,Admn.No 20BCB7031"<<endl;
}
