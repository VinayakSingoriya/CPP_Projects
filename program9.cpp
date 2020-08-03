#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class marksheet
{
  private:
    char sname[20];
    char enroll[10];
    static int roll_no;
    int T_marks[5];
    int P_marks[5];
    char grade[3];
  public:
      marksheet()
      {

      }
      int roll()
      {
          int r=++ roll_no;
          return(r);
      }
      friend istream& operator >> (istream& din,marksheet &D) ;
      friend ostream& operator << (ostream& dout, marksheet &D);
};
int marksheet::roll_no;
istream& operator >>(istream& din,marksheet &D)
{
     fflush(stdin);
     cout<<"ENTER STUDENT NAME:\n";
          gets(D.sname);
         fflush(stdin);
          cout<<"ENTER ENROLL NUMBER:\n";
          cin>>D.enroll;
          cout<<"ENTER 5 THEORITICAL MARKS:\n";
           fflush(stdin);
          for(int i=0;i<=4;i++)
          {
              cin>>D.T_marks[i];
          }
          cout<<"ENTER 5 PRACTICAL MARKS:\n ";
           fflush(stdin);
          for(int i=0;i<=4;i++)
          {
              cin>>D.P_marks[i];
          }
          return(cin);
}
ostream& operator <<(ostream& dout,marksheet &D)
{
    cout<<"\n*STUDENT NAME: "<<D.sname;
    cout<<"\n*ENROLLMENT NO: "<<D.enroll;
    cout<<"\n*ROLL NO: "<<D.roll();
    cout<<"\n=> THEORITICAL MARKS:\n";
    for(int i=1;i<=5;i++)
    {
        cout<<"  marks"<<i<<":"<<D.T_marks[i];
    }
    cout<<"\n=> PRACTICAL MARKS:\n";
    for(int i=1;i<=5;i++)
    {
        cout<<"  marks"<<i<<":"<<D.T_marks[i];
    }
    return(cout);
}
int main()
{
 marksheet M[3];
 for(int i=1;i<=3;i++)
 {
     cout<<"\n\nENTER "<<i<<" STUDENT DETAILS :\n";
     cin>>M[i];
 }
 cout<<"EXAMINATIONS MARKSHEETS ARE:::\n\n";
 for(int i=1;i<=3;i++)
 {
  cout<<"\n--------------------\n";
  cout<<"==> STUDENT "<<i<<" MARSKSHEET:\n";
  cout<<M[i];
 }
return(0);
}
