#include<iostream>
using namespace std;
class Furniture{
    public:
    int quantities;
    int price;
    string products;
    void details(){
        int n;
        cout<<"Enter Number of products : ";
        cin>>n;
        int i;
        for(i=0;i<n;i++){
        cout<<"Enter the Name of the Furniture : ";
        cin>>products;
        cout<<"Enter the Price of the Furniture : ";
        cin>>price;
        cout<<"Enter the Quantity of the Furniture : ";
        cin>>quantities;
        cout<<"Total cost is : "<<price*quantities<<endl;
        }
    }
};
int main()
{
    Furniture f;
    f.details();
    cout<<"Submitted by G.Hruthesh Reddy,Admn.No 20BCB7031"<<endl;
}
