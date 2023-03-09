#include<iostream>
using namespace std;

class Bank
{
    public:
    string Bankname="HDFC";
    string location="Vijayawada";
    void details()
    {
        cout<<"****Bank details****"<<endl;
        cout<<"Bank name : "<<Bankname<<endl;
        cout<<"Location : "<<location<<endl;
    }
};
class Account : public Bank
{
    public :
    string accountname="Ramesh";
    int accountno=1234;
    int balance=10000;
    int withdraw;
    void accountdetails()
    {
        cout<<"****Account details****"<<endl;
        cout<<"Account Number : "<<accountno<<endl;
        cout<<"Account holder name : "<<accountname<<endl;
        cout<<"Balance Amount : "<<balance<<endl;
    }
    void withdrawl()
    {
        cout<<"Enter amount to withdraw : ";
        cin>>withdraw;
        if(withdraw>10000)
        cout<<"Insufficient Balance"<<endl;
        else{
        int remainingbalance=balance-withdraw;
        cout<<"Balance amount after withdrawl : "<<remainingbalance<<endl;
        }
        cout<<"Submitted by G.Hruthesh Reddy,Admn.No.20BCB7031"<<endl;
    }
};
int main()
{
    Bank b;
    Account a;
    b.details();
    a.accountdetails();
    a.withdrawl();
}
