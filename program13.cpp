#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;
class Account
{
private:
    string depositor;  //name of the depositor
    int acc_no;       //account number
    char acc_type[20];  //type of account
    float amount;     //balane amount in the account
public:
    Account(){}
    void get_data()
    {
        cout<<"Enter name of the depositor:\n";
        getline(cin,depositor);
        cout<<"\nEnter account no:\n";
        cin>>acc_no;
        cout<<"\nWhat type of your account:\n";
        cout<<"PRESS 1 : For Current account\n";
        cout<<"PRESS 2 : For Saving account \n";
        int n;
        cin>>n;
        switch(n)
        {
        case 1:
            strcpy(acc_type,"Current Account");
            break;
        case 2:
            strcpy(acc_type,"Saving Account");
            break;
        default:
           strcpy(acc_type,"Current Account");
            break;
        }
        cout<<"\nEnter amount(in rupees) \n";
        cin>>amount;
    }
    void deposit()
    {
        float money;
        cout<<"Enter the amount to be deposited\n";
        cin>>money;
        amount=money+amount;
        cout<<"\nyour total balance is : "<<amount;
    }
    float withdrawl()
    {
        float money;
        cout<<"\nYour balance is :"<<amount<<"(please withdraw below this range)\n";
         cout<<"\nEnter amount: ";
           cin>>money;
       if(money<=amount)
       {
           cout<<">>PLEASE COLLECT YOUR CASH\n";
           amount=amount -money;
            return(amount);
       }
       else
        cout<<"\n=> ALERT: Your account do not have sufficient amount\n\n";
       exit(0);
    }
    void show_data()
    {
        cout<<"\n>> Account holder name: "<<depositor;
        cout<<"\n>> Account number: "<<acc_no;
        cout<<"\n>> Account type: "<<acc_type;
        cout<<"\n>> Your balance: "<<amount<<" Rs.";
    }
};
int main()
{
    Account A1;
    cout<<"ENTER REQIRED DETAILS:\n\n";
    A1.get_data();
    cout<<"\n----------\nYOUR DETAILS ARE::\n----------\n";
    A1.show_data();
        cout<<"\n\nPRESS 1: FOR DEPOSIT\n";
        cout<<"PRESS 2: For Withdrawl\n";
        int n;
        cout<<"Enter your choice:\n";
        cin>>n;
        switch(n)
        {
            case 1:
                A1.deposit();
                break;
            case 2:
                cout<<"=> PLEASE FOLLOW WITHDRAWL PROCESS:\n";
           float balance;
           balance=A1.withdrawl();
           cout<<"\n\nyour left balance after withdrawl is : "<<balance<< " Rs.";
           break;
            default:
                cout<<"=> ALERT: Invalid choice\n";
        }
        return(0);
}
