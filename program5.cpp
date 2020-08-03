#include<iostream>
#include<stdlib.h>
using namespace std;
class shape
{
private:
    float vol;
public:
    float volume(float r)
    {
        vol=(4/3)*3.14*r*r*r;
       return(vol);
    }
    float volume(float l,float b,float h)
    {
        vol=l*b*h;
        return(vol);
    }
    float volume(float r,float h)
    {
        vol=3.14*r*r*h;
        return(vol);
    }
};
int main()
{
    shape S1;
    cout<<"PRESS 1 : FOR VOLUME OF SPHERE\n";
    cout<<"PRESS 2 : FOR VOLUME OF CUBOID\n";
    cout<<"PRESS 3 : FOR VOLUME OF CYLINDER\n";
    cout<<"PRESS 4 : EXIT\n";
    int n;
    cout<<"\n\nENTER YOUR CHOICE:\n";
    cin>>n;
    cout<<"-----------\n";
    switch(n)
    {
    case 1:
        float r;
        float V;
        cout<<">>ENTER RADIUS OF A SPHERE(in meter):\n";
        cin>>r;
        V=S1.volume(r);
         cout<<"\n\n=> VOLUME OF SPHERE IS= "<<V<<" cubic metre\n\n";
         break;
    case 2:
        float L,B,H,volum;
        cout<<">>ENTER LENGTH OF A CUBOID(in meter):\n";
        cin>>L;
        cout<<">>ENTER BREADTH OF A CUBOID(in meter):\n";
        cin>>B;
        cout<<">>ENTER HEIGHT OF A CUBOID(in meter):\n";
        cin>>H;
        volum= S1.volume(L,B,H);
        cout<<"\n\n=> VOLUME OF CUBOID IS= "<<volum<<" cubic metre\n\n";
        break;
    case 3:
        float R,h,vol;
         cout<<">>ENTER RADIUS OF A CYLINDER(in meter):\n";
         cin>>R;
          cout<<">>ENTER HEIGHT OF A CYLINDER(in meter):\n";
          cin>>h;
          vol=S1.volume(R,H);
            cout<<"\n\n=> VOLUME OF CYLINDER IS= "<<vol<<" cubic metre\n\n";
            break;
    case 4:
        exit(0);
    default:
        cout<<">> ALERT : INVALID CHOICE <<\n\n";

    }
    return(0);
}
