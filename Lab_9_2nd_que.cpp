#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream s;
    s.open("sales.dat", ios::out);
    cout<<"Writing to the file"<<endl;   
    char productname[50]="Goodday";
    char qty[50]="10";
    char price[50]="10";
    s<<productname<<endl;
    s<<qty<<endl;
    s<<price<<endl;
    s.close();
    s.open("sales.dat", ios::in); 
    s >> productname;
    cout<<"Product name is : "<< productname<<endl;
    s >> qty;
    cout<<"Quantity : "<< qty<<endl;
    s >> price;
    cout<<"Price : "<< price<<endl;
    s.close();                  
    s.open("sales1.dat",ios::app);
    char total_amount[50]="100";
    s<<total_amount<<endl;
    s.close();
    s.open("sales1.dat", ios::in); 
    s>>total_amount;
    cout<<"Total amount : "<< total_amount <<endl;
    s.close();
    cout<<"Submitted by G.Hruthesh Reddy,Admn.No 20BCB7031"<<endl;
    return 0;
}