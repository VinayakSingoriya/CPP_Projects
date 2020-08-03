#include<fstream>
#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class EMP
{
private:
    char emp_name[20];   //employ name
    char emp_id[20];     //employ id
    int num;           //contact number
    char address[30];    //adress of employ
    int year;          //year of joining
    char department[20]; //working departmnet
public:
    void get_data()
    {
        fflush(stdin);
        cout<<"Enter employ name:\n";
        gets(emp_name);
        cout<<"\nEnter employ id:";
        gets(emp_id);
        fflush(stdin);
        cout<<"\nEnter contact number:\n";
        cin>>num;
         fflush(stdin);
        cout<<"\nEnter  Residential Adress:\n";
         fflush(stdin);
        gets(address);
         fflush(stdin);
        cout<<"\nEnter Department name:\n";
        gets(department);
        cin.ignore();
       fflush(stdin);
        cout<<"\nEnter year of joining:\n";
        cin>>year;
    }
    /*void put_data()
    {
       cout<<"\n\nEmploy name: "<<emp_name;
       cout<<"\nEmploy ID: "<<emp_id;
       cout<<"\nEmploy's contact number: "<<num;
       cout<<"\nEmploy's Residentail Adress: "<<address;
       cout<<"\nDepartment name: "<<department;
       cout<<"\nJoining year: "<<year;
    }
    void file_handling()
    {
        fstream fout;
        fout.open("file.txt",ios::app);
        fout<<emp_name<<"\t"<<emp_id<<"\t"<<num<<"\t"<<address<<"\t"<<department<<"\t"<<year;
        fout.close();
    }*/
};
int main()
{
  fstream f;
  EMP E1;
  int n;
  f.open("myfile.txt",ios::app);
  do
  {
      cout<<"==> Enter Required details::\n";
      E1.get_data();
      f.write((char*)&E1,sizeof(E1));
      cout<<"\n\n => press 1 for more entry\n\n";
      fflush(stdin);
      cin>>n;
  }while(n==1);
  f.close();
  return(0);
}
