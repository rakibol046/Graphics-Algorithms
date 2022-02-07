#include <iostream>
#include <graphics.h>

using namespace std;
void drawline(int x1, int y1, int x2, int y2, int color)
{
  float x, y, dx, dy, d0, dold;
  dx = x2-x1;
  dy = y2-y1;
  d0 = dy - (dx/2);
    x = x1;
    y = y1;

  for (int i=0; i<=x2; i++)
  {
     putpixel (x, y, color);
       if (d0>0){
        x = x + 1;
        y = y + 1;
        dold = d0;
        d0 = dold + (dy - dx);
       }


      else{
        x = x + 1;
        dold = d0;
        d0 = dold + dy;
      }

  }
}

int main()
{
    int x1, x2, y1, y2, color;
    initwindow (700, 550, "DDA line algo");

    cout<<"Enter x1, y1: ";
    cin>>x1>>y1;

    cout<<"Enter x2, y2: ";
    cin>>x2>>y2;

    cout<<"Enter color in integer format range(1:15): ";
    cin>>color;
    drawline( x1, y1, x2, y2, color);
    getch();
    return 0;
}

