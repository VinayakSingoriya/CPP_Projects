#include<iostream>
#include<stdlib.h>
using namespace std;
class Rectangle
{
private:
    float length,width;
public:
    void setlength(float l)
    {
        length=l;
    }
    void setwidth(float w)
    {
        width=w;
    }
    float perimeter()
    {
        float p;
        p=2*(length+width);
        return(p);
    }
    float area()
    {
        float A;
        A=length*width;
        return(A);
    }
    void show()
    {
        cout<<"\nLENGTH OF A RECTANGLE = "<<length<<" meter";
        cout<<"\nWIDTH OF A RECTANGLE  = "<<width<<" meter";
    }
    int sameArea(Rectangle R)
    {
      float Area1=length*width;
      float Area2=R.length*R.width;
      if(Area1==Area2)
        return(1);
      else
        return(0);
    }
};
int main()
{
    Rectangle R1,R2;
    R1.setlength(5.0);
    R1.setwidth(2.5);
    R2.setlength(5.0);
    R2.setwidth(18.9);
    cout<<"=> DETAILS OF FIRST RECTANGLE ARE:\n";
    R1.show();
    cout<<"\n\n----------";
    cout<<"\n\n => DETAILS OF SECOND RECTANGLE ARE:\n";
    R2.show();
    cout<<"\n\n----------";
    float Area=R1.area();
    cout<<"\nAREA OF FIRST RECTANGLE IS = "<<Area<<" square metre";
    Area=R2.area();
    cout<<"\nAREA OF SECOND RECTANGLE IS = "<<Area<<" square metre";
    cout<<"\n----------";
    float peri=R1.perimeter();
    cout<<"\nperimeter OF FIRST RECTANGLE IS = "<<peri<<" metre";
     peri=R2.perimeter();
    cout<<"\nperimeter OF SECOND RECTANGLE IS = "<<peri<<" metre";
    cout<<"\n----------";
    int result=R1.sameArea(R2);
    if(result==1)
    cout<<"\n> THE AREA OF FIRST AND SECOND RECTANGLE IS SAME";
    else
     cout<<"\n> THE AREA OF FIRST AND SECOND RECTANGLE IS DIFFERENT\n\n";
    return(0);
}
