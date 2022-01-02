#include <iostream>
#include <graphics.h>

using namespace std;
void drawline(int x1, int y1, int x2, int y2, int color)
{
  float x, y, step, dx, dy;
  dx = x2-x1;
  dy = y2-y1;

  if (dy >= dx)
      step = dy;

  else
      step = dx;

  x = x1;
  y = y1;

  dx = dx/step;
  dy = dy/step;


  for (int i=0; i<=step; i++)
  {
     putpixel (x, y, color);
     x += dx;
     y += dy;
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

