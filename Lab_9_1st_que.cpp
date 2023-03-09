#include <fstream>
#include <iostream>
using namespace std;
int main ()
{
char name[50];
char rollno[50];
char email[50];
char id[50];
char street[50];
char village[50];
char town[50];
char city[50];
ofstream vit;
vit.open("vit.txt");
if(!vit) 
{
cout<<"File creation failed"<<endl;
}
else
{
cout<<"File is Created and is existing"<<endl;
}
cout << "Writing to the file"<<endl;
cout << "Enter your name: ";
cin.getline(name,50);
cout << "Enter your rollno: ";
cin.getline(rollno,50);
cout << "Enter your email: ";
cin.getline(email,50);
cout << "Enter your id: ";
cin.getline(id,50);
cout << "Enter your street: ";
cin.getline(street,50);
cout << "Enter your village: ";
cin.getline(village,50);
cout << "Enter your town: ";
cin.getline(town,50);
cout << "Enter your city: ";
cin.getline(city,50);
vit<<name<<endl;
vit<<rollno<<endl;
vit<<email<<endl;
vit<<id<<endl;
vit<<street<<endl;
vit<<village<<endl;
vit<<town<<endl;
vit<<city<<endl;
vit.close();
ifstream vit1;
vit1.open("vit.txt");
cout<<"Reading from the file"<<endl;
vit1>>name;
vit1>>rollno;
vit1>>email;
vit1>>id;
vit1>>street;
vit1>>village;
vit1>>town;
vit1>>city;
cout<<name<<endl;
cout<<rollno<<endl;
cout<<email<<endl;
cout<<id<<endl;
cout<<street<<endl;
cout<<village<<endl;
cout<<town<<endl;
cout<<city<<endl;
vit1.close();
cout<<"Submitted by G.Hruthesh Reddy,Admn.No 20BCB7031"<<endl;
return 0;
}