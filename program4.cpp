#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
class matrix
{
private:
    int a[2][2];
public:
    void input()
    {
        for(int i=0;i<2;i++)
            {
                for(int j=0;j<2;j++)
                cin>>a[i][j];
            }
    }
    void display()
    {
            for(int i=0;i<2;i++)
            {
               for(int j=0;j<2;j++)
                {
                  cout<<a[i][j]<<"  ";
                }
                cout<<"\n";
            }
    }
    void transpose()
    {
          for(int i=0;i<2;i++)
            {
               for(int j=0;j<2;j++)
                {
                  cout<<a[j][i]<<"  ";
                }
                cout<<"\n";
            }
    }
    void add_matrix( matrix M)
    {
        for(int i=0;i<2;i++)
           {
            for(int j=0;j<2;j++)
            {
                cout<<a[i][j]+M.a[i][j]<<"  ";
            }
            cout<<"\n";
           }
    }
    void multiply_matrix( matrix M)
    {
      for(int i=0;i<2;i++)
        {
           for(int j=0;j<2;j++)
           {
               int c[i][j];
               c[i][j]=0;
               for(int k=0;k<2;k++)
               {
                 c[i][j]=c[i][j]+(a[i][k]*M.a[k][j]);
                 //cout<<c[i][j]<<"    ";
               }
                cout<<c[i][j]<<"    ";
           }
           cout<<"\n";
        }
    }
};
int main()
{
    matrix M1,M2;
    cout<<"PRESS 1 : INPUT AND DISPLAY A MATRIX\n";
    cout<<"PRESS 2 : ADD TWO MATRIX\n";
    cout<<"PRESS 3 : MULTIPLY TWO MATRIX\n";
    cout<<"PRESS 4 : TRANSPOSE A MATRIX\n";
    cout<<"PRESS 5 : EXIT\n\n\n";
    cout<<"ENTER YOUR CHOICE:\n";
    int m;
    cin>>m;
    switch(m)
    {
    case 1:
        cout<<"ENTER FOUR ELEMENTS:\n";
        M1.input();
        cout<<"\n=> YOUR ENTERED MATRIX IS:\n";
        M1.display();
        break;
    case 2:
        cout<<"ENTER FOUR ELEMENTS:\n";
        M1.input();
        cout<<"\nENTER NEXT MATRIX:\n";
        M2.input();
        cout<<"\n=> ADDITION OF ABOVE TWO MATRIX IS:\n";
        M1.add_matrix(M1);
        break;
    case 3:
        cout<<"ENTER FOUR ELEMENTS:\n";
          M1.input();
        cout<<"\nENTER NEXT MATRIX:\n";
        M2.input();
        cout<<"\n=> MULTIPICATION OF ABOVE TWO MATRIX IS:\n";
        M1.multiply_matrix(M1);
        break;
    case 4:
        cout<<"ENTER FOUR ELEMENTS:\n";
        M1.input();
        cout<<"\n=> TRANSPOSE OF YOUR MATRIX IS:\n\n";
        M1.transpose();
        break;
    case 5:
        exit(0);
    }
    return(0);
}
