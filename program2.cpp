#include<iostream>
using namespace std;
class student
{
private:
    int admno;
    char sname[20];
    float eng,math,science;
    float total;
public:
    void Takedata()
    {
        cout<<"ENTER ROLL NO.:\n=>";
        cin>>admno;
        cout<<"ENTER STUDENT NAME :\n=>";
        cin>>sname;
        cout<<"ENTER ENGLISH MARKS :\n=>";
        cin>>eng;
        cout<<"ENTER MATHEMATICS MARKS :\n=>";
        cin>>math;
        cout<<"ENTER SCIENCE MARKS :\n=>";
        cin>>science;

    }
    void showdata()
    {
        cout<<"\nSTUDENT NAME => "<<sname;
        cout<<"\nROLL NO. => "<<admno;
        cout<<"\nENGLISH MARKS => "<<eng;
        cout<<"\nMATHEMATICS MARKS => "<<math;
        cout<<"\nSCIENCE MARKS => "<<science;
    }
    float ctotal()
    {
        total=eng+math+science;
        return(total);
    }
};
int main()
{
    student S1;
    cout<<"ENTER STUDENT DETAILS:\n\n";
    S1.Takedata();
    cout<<"----------\nYOUR FINAL DETAILS ARE >>>>\n----------\n";
    S1.showdata();
    float result;
    result=S1.ctotal();
    cout<<"\n__________________\nTOTAL SCORE IS="<<result<<"|\n__________________|";
    return(0);
}
