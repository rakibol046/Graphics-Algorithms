#include <iostream>
#include <graphics.h>
using namespace std;

void drawcircle(int xc,int yc,int x,int y)
{
putpixel(xc+x, yc+y, 12);
putpixel(xc-x, yc+y, 12);
putpixel(xc+x, yc-y, 12);
putpixel(xc-x, yc-y, 12);
putpixel(xc+y, yc+x, 12);
putpixel(xc-y, yc+x, 12);
putpixel(xc+y, yc-x, 12);
putpixel(xc-y, yc-x, 12);
}
void circlemidpoint(int xc,int yc,int r)
{
    int x=0,y=r;
    int p = 1-r;
    while(x<y)
    {
        drawcircle(xc,yc,x,y);
        x++;
        if(p<0)
        {
            p = p + 2*x + 3;
        }
        else
        {
            y--;
            p = p + 2*x - 2*y + 5;
        }
        drawcircle(xc,yc,x,y);
    }
}

int main()
{
    int xc,yc,r;
    initwindow (700, 500, "circle drawing algo");

    cout<<"Enter center coordinate of circle:";
    cin>>xc>>yc;
    cout<<"Enter radius of circle:";
    cin>>r;
    circlemidpoint(xc,yc,r);
    getch();
    return 0;
}
