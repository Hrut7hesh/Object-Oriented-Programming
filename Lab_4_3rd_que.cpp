#include <iostream>
using namespace std;

class Box{
    double length;
    double breadth;
    double amount1;
    double amount2;
   public:
      double Area(){
         return length*breadth;
      }
      void Length(double len){
         length=len;
      }
      void Breadth(double bre){
         breadth=bre;
      }
      double Amount1(double a1){
         amount1=a1;
      }
      double Amount2(double a2){
         amount2=a2;
      }
};
int main() {
   Box Box1;    
   Box Box2;
   double area1,area2;
   double TA=0;
   double difference=0;
   double area=0;    
   Box1.Length(20); 
   Box1.Breadth(30); 
   Box1.Amount1(100);
   Box2.Length(20); 
   Box2.Breadth(30); 
   Box2.Amount2(250);
   area1=Box1.Area();
   area2=Box2.Area();
   TA=Box2.Amount2(250)+Box1.Amount1(100);
   cout<<"Total amount is "<<TA<<endl;
   cout<<"Area of Box1 : "<<area1<<endl;
   area1=Box1.Area();
   cout<<"Area of Box2 : "<<area2<<endl;
   area2=Box2.Area();
   difference=Box2.Amount2(250)-Box1.Amount1(100);
   cout<<"Difference of amount is "<<difference<<endl;
   cout<<"Submitted by G.Hruthesh Reddy,Admn.no 20BCB7031"<<endl;
   return 0;
}