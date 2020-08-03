#include<iostream>
using namespace std;
class complex
{
private :
    float real,imag;
public:
    void set(float,float);
    void display();
    complex sum(complex);
};
void complex::set(float r,float i)
{
    real=r;
    imag=i;
}
void complex ::display()
{
    cout<<"\nreal= "<<real<<",imaginary= "<<imag;
}
complex complex ::sum (complex c)
{
    complex temp;
    temp.real=real+c.real;
    temp.imag=imag+c.imag;
    return(temp);
}
int main()
{
    complex C1,C2,C3;
    C1.set(5,4);
    C2.set(3,2);
    cout<<"\nFIRST COMPLEX NUMBER IS:\n";
    C1.display();
    cout<<"\n\nSECOND COMPLEX NUMBER IS:\n";
    C2.display();
    C3=C1.sum(C2);
    cout<<"\n\nADDITION OF FIRST AND SECOND COMPLEX NUMBER IS:\n";
    C3.display();
    return(0);
}
