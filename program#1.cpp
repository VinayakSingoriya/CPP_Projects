#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
class array
{
private:
    int arr[10];
public:
    void set_element()
    {
        cout<<"ENTER 10 ELEMENTS OF AN ARRAY\n";
        for(int i=0;i<10;i++)
        {
            cin>>arr[i];
        }

    }
    void minimum()
    {
        int temp=arr[0];
        for(int i=1;i<10;i++)
        {
            if(temp>arr[i])
            {
                temp=arr[i];
            }
        }
        cout<<"minimum value of an array is="<<temp;
    }
    void maximum()
    {
        int temp=arr[0];
        for(int i=1;i<10;i++)
        {
            if(temp<arr[i])
            {
                temp=arr[i];
            }

        }
         cout<<"maximum value is ="<<temp;
    }
    void sum()
    {
        int sum=0;
        for(int i=0;i<10;i++)
        {
            sum=sum+arr[i];
        }
        cout<<"THE SUM OF THE ABOVE ELEMENTS OF AN ARRAY IS ="<<sum;
    }
    void average()
    {
        int sum=0;
        for(int i=0;i<10;i++)
        {
            sum=sum+arr[i];
        }
        int avg=sum/10;
        cout<<"AVERAGE OF THE ABOVE ELEMENTS OF AN ARRAY IS ="<<avg;
    }
    void search()
    {
        int n;
       cout<<"ENTER A NUMBER WHICH YOU WANT TO SEARCH\n";
        cin>> n;
       int loc=0;
        for(int i=0;i<10;i++)
        {
            if(n==arr[i])
             {
                loc=i+1;
                break;
             }

        }
        if(loc>0)
            cout<<">>>Data FOUND at "<<loc<<" position";
        else
            cout<<">>>Data not FOUND";
    }
};
int main()
{
    array A1;
    cout<<"PRESS 1: FOR MINIMUM VALUE IN AN ARRAY\n";
    cout<<"PRESS 2: FOR MAXIMUM VALUE IN AN ARRAY\n";
    cout<<"PRESS 3: FOR SUM OF ELEMENTS OF AN AARAY\n";
    cout<<"PRESS 4: FOR AVERAGE OF ELEMENTS IN AN ARRAY\n";
    cout<<"PRESS 5: FOR SEARCHING IN ELEMENT IN AN ARRAY\n";
    cout<<"PRESS 6: FOR EXIT\n\n\n";
    cout<<"ENTER YOUR CHOICE:\n";
    int choice;
    cin>>choice;
    switch(choice)
    {
        case 1: A1.set_element();
            A1.minimum();
        break;
        case 2:A1.set_element();
             A1.maximum();
        break;
        case 3:A1.set_element();
             A1.sum();
        break;
        case 4:A1.set_element();
             A1.average();
        break;
        case 5:A1.set_element();
             A1.search();
        break;
        case 6:
               exit(0);
        default:
            cout<<">>ALERT:INVALID CHOICE\n";
    }
    return(0);
}
