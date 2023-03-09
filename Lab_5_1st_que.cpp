#include<iostream>
using namespace std;
class TCS{
    string jobname;
    int experience;
    string location;
    int salary;
    public:
       friend void show(TCS job);
       void set_details(string jn,int exp,string gps,int m);
};
void TCS::set_details(string jn,int exp,string gps,int m){
    jobname=jn;
    experience=exp;
    location=gps;
    salary=m;
}
void show(TCS job){
    cout<<"Name of th job : ";
    cin>>job.jobname;
    cout<<"Experience in years : ";
    cin>>job.experience;
    cout<<"Location : ";
    cin>>job.location;
    cout<<"******Your Information*******"<<endl;
    cout<<"Name of th job : "<<job.jobname<<endl;
    cout<<"Experience in years : "<<job.experience<<endl;
    cout<<"Location : "<<job.location<<endl;
    if(job.experience<2)
    {
        cout<<"Salary per month is 25000"<<endl;
    }
    else if(job.experience>2&&job.experience<5)
    {
        cout<<"Salary per month is 45000"<<endl;
    }
    else
    {
        cout<<"Salary per month is 57000"<<endl;
    }
    cout<<"Submitted by Gelle Hruthesh Reddy, Admn .No 20BCB7031"<<endl;
}
int main(){
    TCS job;
    show(job);
    return 0;
}
