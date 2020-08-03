#include<iostream>
#include<stdio.h>
using namespace std;
class Travel
{
private:
    int flight_no;
    char destination[20];
    float distance;
    float fuel;
    float CALFUEL()
    {
        if(distance<=1000)
            fuel=500;
        else
        {
            if(distance>100&&distance<=2000)
                fuel=1100;
            else
                fuel=2200;
        }
        return(fuel);
    }
public:
    void FEEDINFO()
    {
        cout<<"\nENTER FLIGHT NUMBER :\n=>";
        cin>>flight_no;
        cout<<"\nENTER NAME OF DESTINATION :\n=>";
        cin>>destination;
        fflush(stdin);
        cout<<"\nENTER DISTANCE BETWEEN ORIGIN AND DESTINATION(in km) :\n=>";
        cin>>distance;
    }
    void SHOWINFO()
    {
        cout<<"\n\nFLIGHT NUMBER =>"<<flight_no;
        cout<<"\nYOUR DESTINATION ="<<destination;
        cout<<"\nDISTANCE BETWEEN ORIGIN AND DESTINATION =>"<<distance<<" km";
    }
    void material()
    {
        float oil;
        oil=CALFUEL();
         cout<<"\n__________________________\nFUEL REQUIRED =>"<<oil<<"litre"<<"|\n_________________________|";
        cout<<"\n\n\n                  ~~ W_I_S_H  Y_O_U  A  H_A_P_P_Y  J_O_U_R_N_E_Y ~~\n\n\n";
    }
};
int main()
{
    Travel T1;
    cout<<"ENTER REQUIRED DETAILS :\n-------------------";
    T1.FEEDINFO();
    cout<<"\n----------\nYOUR DETAILS ARE:\n----------";
    T1.SHOWINFO();
    cout<<"\n\n----------";
    cout<<"\n\nPRESS 1 TO KNOW THE AMOUNT OF FUEL NEEDED\n";
    int n;
    cin>>n;
    switch(n)
    {
    case(1):
        T1.material();
        break;

    default:
        cout<<"\n ALERT : YOU ENTERED INVALID NUMBER\n";
    }
    return(0);
}
