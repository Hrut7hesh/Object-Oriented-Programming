#include<iostream>
using namespace std;
int deposit()
{
    int balance;
    int deposit_amount;
}
template<typename T>
T display(T balance, T deposit_amount)
{
    cout<<"Balance after depositing money in Customer account : "<<balance+deposit_amount<<endl;
}
int main()  
{
    display<int>(1000,2500);
    display<float>(2436.54,1432.43);
    cout<<"Submitted by G.Hruthesh Reddy, Admn.No 20BCB7031"<<endl;
}