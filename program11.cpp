#include<iostream>
#include<stdlib.h>
using namespace std;
class time
{
public:
    int hour,min,sec;
public:
    friend iostream & operator >>(iostream &,time &);
    friend ostream & operator <<(ostream &,time &);
    time operator +(time);
     friend int operator >(time,time);
};
istream & operator >>(istream &din,time &T)
{
    cout<<"Enter hour,minute,and second:\n";
    cin>>T.hour>>T.min>>T.sec;
    return(din);
}
ostream & operator <<(ostream &dout,time &T)
{
 cout<<"Hour:minute:second => "<<T.hour<<":"<<T.min<<":"<<T.sec;
 return(dout);
}
time time::operator +(time T)
{
    time temp;
    temp.sec=sec+T.sec;
    temp.min=min+T.min+(temp.sec/60);
    temp.hour=hour+T.hour+(temp.min/60);
    temp.min=temp.min%60;
    temp.sec=temp.sec%60;
    return(temp);
}
int operator >(time T1,time T2)
{
    int r;
    r=T1.hour>T2.hour;
    if(T1.hour==T2.hour)
    {
        r=T1.min>T2.min;
        if(T1.min==T2.min)
        {
            cout<<"\n\n=> TIME 1 and TIME 2  are EQUAL";
            exit(0);
        }
        return(r);
    }
    else
    return(r);
}
int main()
{
    time t1,t2,t3;
    int R;
    cout<<"\n=> Enter TIME 1:\n";
    cin>>t1;
    cout<<"\n=> Enter TIME 2:\n";
    cin>>t2;
    cout<<"\nYOU ENTERED::\n";
    cout<<"Time 1 =>"<<t1;
    cout<<"\n\nTime 2 =>"<<t2;
    t3=t1+t2;
    cout<<"\n\n=> The addition of two times is =>"<<t3;
    R=t1>t2;
    if(R==1)
    {
        cout<<"\n\n=> TIME 1 is greater";
    }
    else
    {
        cout<<"\n\n=> TIME 2 is greater";
    }

    return(0);
}
