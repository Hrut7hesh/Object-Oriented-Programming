#include<iostream>
using namespace std;
class Bank{
    public:
       int accno;
       string custname;
       int balance;
void set_details(int an,string cn,int b){
    accno=an;
    custname=cn;
    balance=b;
}
void login(){
    cout<<"Enter the account number :";
    cin>>accno;
    cout<<"Enter your name :";
    cin>>custname;
    cout<<"Enter Balance Amount :";
    cin>>balance;
}
void deposit(){
    int dp;
    cout<<"Enter Deposit Amount = ";
    cin>>dp;
    balance+=dp;
}
void display(){
        cout<<"****Bank Account Information****"<<endl;
        cout<<"Accout Number : "<<accno<<endl;
        cout<<"Customer Name : "<<custname<<endl;
        cout<<"Balance : "<<balance<<endl;  
}
};
class Loan:public Bank{
    public:
    int Loan_Capital;
    int due_per_month;
    int loan_balance;
void set_loan(int lc,int m,int lb){
    Loan_Capital=lc;
    due_per_month=m;
    loan_balance=lb;
}
void Balance(){
    int n;
    cout<<"Enter the total Loan : ";
    cin>>Loan_Capital;
    cout<<"No of Months : ";
    cin>>n;
    due_per_month=Loan_Capital/n;
    cout<<"Due per Month : "<<due_per_month<<endl;
    cout<<"Loan amount after payment of 3 months : "<<Loan_Capital-3*due_per_month<<endl;
    cout<<"****Loan Information****"<<endl;
    cout<<"Total Loan : "<<Loan_Capital<<endl;
    cout<<"Due per Month : "<<due_per_month<<endl;
    cout<<"Balance Loan amount after payment of 3 months : "<<Loan_Capital-3*due_per_month<<endl;
    cout<<"Account Number : "<<accno<<endl;
    cout<<"Customer Name : "<<custname<<endl;
    cout<<"Submitted by Gelle Hruthesh Reddy, Admn .No 20BCB7031"<<endl;
}
};
int main(){
    Loan l;
    l.login();
    l.deposit();
    l.display();
    l.Balance();
    return 0;
}
