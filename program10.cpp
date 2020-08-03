#include<iostream>
using namespace std;

class Road
{
private:
    int distance;
public:
    int operator+(Road D)
    {
        int result;
        result= distance+D.distance;
        return(result);
    }
    friend  int operator -(Road d,Road D);
    friend istream & operator >>(istream &din,Road &D);
    friend ostream & operator <<(ostream &dout,Road &D);
};
int operator -(Road d,Road D)
{
    int result;
    result=d.distance-D.distance;
    if(result>=0)
    {
        return(result);
    }
    else
    {
        result=-result;
        return(result);
    }
}
 istream & operator >>(istream &din,Road &D)
{
    cin>>D.distance;
    return(cin);
}
/*ostream & operator <<(ostream &dout,Road &D)
{
    cout<<D.distance;
}*/
int main()
{
    Road P1,P2,P3;
    int R;
    cout<<"PRESS 1 : For addition of two distance\n";
    cout<<"PRESS 2 : For subtracton of two distance\n";
    int n;
    cout<<"\nEnter your choice:\n";
    cin>>n;
    switch(n)
    {
    case 1:
        cout<<"Enter two distances(in km):\n";
        cin>>P1>>P2;
        R=P1+P2;
        cout<<"|nAddition of two distance is : ";
        cout<<R<<" km";
        break;
    case 2:
        cout<<"Enter two distance(in km):\n";
        cin>>P1>>P2;
        R=P1-P2;
        cout<<"|nSubtraction of two distance is : ";
        cout<<R<<" km";
        break;
    default:
        cout<<"\n>> ALERT: Invalid choice";
    }
    return(0);
}

