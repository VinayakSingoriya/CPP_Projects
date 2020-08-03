#include<iostream>
using namespace std;

class Road
{
private:
    int distance;
public:
    Road operator+(Road D)
    {
        Road result;
        result.distance= distance+D.distance;
        return(result);
    }
    friend  Road operator -(Road d,Road D);
    friend istream & operator >>(istream &din,Road &D);
    friend ostream & operator <<(ostream &dout,Road &D);
};
Road operator -(Road d,Road D)
{
    Road result;
    result.distance=d.distance-D.distance;
    return(result);
}
 istream & operator >>(istream &din,Road &D)
{
    cin>>D.distance;
    return(cin);
}
ostream & operator <<(ostream &dout,Road &D)
{
    cout<<D.distance;
    return(cout);
}
int main()
{
    Road P1,P2,P3;
    cout<<"PRESS 1 : For addition of two distance\n";
    cout<<"PRESS 2 : For subtracton of two distance\n";
    int n;
    cout<<"\nEnter your choice:\n";
    cin>>n;
    switch(n)
    {
    case 1:
        cout<<"Enter two distances(in km):\n";
        cin>>P1;
        cin>>P2;
        P3=P1+P2;
        cout<<"|nAddition of two distance is : ";
        cout<<P3;
        break;
    case 2:
        cout<<"Enter two distance(in km):\n";
        cin>>P1;
        cin>>P2;
        P3=P1-P2;
        cout<<"|nSubtraction of two distance is : ";
        cout<<P3;
        break;
    default:
        cout<<"\n>> ALERT: Invalid choice";
    }
    return(0);
}
