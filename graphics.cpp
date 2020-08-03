#include<graphics.h>
int main()
{
    int gd=0,gm;
    initgraph(&gd,&gm,"");
    circle(200,100,80);
    rectangle(300,50,450,100);
    line(250,200,500,350);
    getch();
    closegraph();
    return 0;
}
