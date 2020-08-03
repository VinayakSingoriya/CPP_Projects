#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
class date
{
private:
    int dd,mm,yy;
public:
    date(){}
    date(int d,int m,int y)

    {
      dd=d;
      mm=m;
      yy=y;
    }
    date operator ++()
    {
        if(dd>31||mm>12)
        {
            cout<<"\n>> ALERT : EITHER DATE OR MONTH DOES NOT EXIST\n";
            exit(0);
        }
    else


    {
         cout<<"\n=> YOU ENTERED DATE IS:\n";
    cout<<"dd/mm/yy:"<<dd<<"/"<<mm<<"/"<<yy;
          date temp;
        dd=++dd;

        if(dd>31)
        {
            if(dd>31&&mm>=12)
            {
                temp.dd=1;
                temp.mm=1;
                temp.yy=++yy;
                return(temp);
            }
            else
                temp.mm=++mm;
                temp.dd=1;
                temp.yy=yy;
                return(temp);
        }
        else
          temp.dd=dd;
          temp.mm=mm;
          temp.yy=yy;
          return(temp);
     }
    }
    friend istream & operator >> (istream &din,date &D);
    friend ostream & operator << (ostream &dout,date &D);
};
  istream & operator >> (istream &din,date &D)
    {
        din>>D.dd>>D.mm>>D.yy;
        return(din);
    }
    ostream & operator << (ostream &dout,date &D)
    {
        dout<<"dd/mm/yy:"<<D.dd<<"/"<<D.mm<<"/"<<D.yy;
        return(dout);
    }
int main()
{
    cout<<"\n=> ENTER DATE IN THE FORMATE OF DD(1-31)/MM(1-12)/YY:\n";
    int D,M,Y;
    cout<<"\nDate: ";
    cin>>D;
    cout<<"\nMonth: ";
    cin>>M;
    cout<<"\nyear: ";
    cin>>Y;
    date D1(D,M,Y),D2;
    D2=++D1;
    //cin>>D2;
    cout<<"\n\n=> your incremented date:\n";
    cout<<D2;
    return(0);
}
