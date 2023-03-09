#include<iostream>
using namespace std;

class HospitalManagement
{
    public:
    string Hospitalname="Apollo";
    string location="Vijayawada";
    int beds=100;
    string Doctorname="Hruthesh";
    int price=10000;
    void details()
    {
        cout<<"****Hospital details****"<<endl;
        cout<<"Hospital name : "<<Hospitalname<<endl;
        cout<<"Location : "<<location<<endl;
        cout<<"Number of beds : "<<beds<<endl;
        cout<<"Doctor name : "<<Doctorname<<endl;
        cout<<"Price per bed : "<<price<<endl;
    }
};
class patient : public HospitalManagement
{
    public :
    string patientname="Ramesh";
    int patientid=69;
    void patientdetails()
    {
        cout<<"****Patient details****"<<endl;
        cout<<"Patient ID : "<<patientid<<endl;
        cout<<"Patient name : "<<patientname<<endl;
    }
    void details()
    {
        cout<<"Patient Doctor name : "<<Doctorname<<endl;
        cout<<"Price per one day : "<<price<<endl;
        cout<<"Submitted by G.Hruthesh Reddy,Admn.No.20BCB7031"<<endl;
    }
};
int main()
{
    HospitalManagement hm;
    patient p;
    hm.details();
    p.patientdetails();
    p.details();
}
