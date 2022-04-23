#include "TXLib.h"
#include "math.h"

void Draw_Fon();
void DrawBase(int xh, int yh, int xl, int yl);
void MoveBase(int *xh, int *yh, int *xl, int *yl, int *fi, int t);
void DrawSun();
void DrawEarth();
void DrawLever(int x, int y);
void MoveLever(int *x, int *y, int *fi, int t);
void lever();
void base();

int main ()
{
    txCreateWindow(1075, 625);

    Draw_Fon();

   //Draw_Base();

    DrawSun();

    DrawEarth();

   // DrawLever(366,452);

    int t   = 0;
    int xl  = 366;
    int yl  = 452;
    int xbh  = 438;
    int ybh  = 413;
    int xbl  = 455;
    int ybl  = 413;
    int fi  = 0;

    while (t<10000)
    {

     txClear();
     Draw_Fon();



    DrawEarth();



    MoveBase(&xbh,&ybh,&xbl, &ybl,&fi,t);
    DrawBase(xbh,ybh,xbl,ybl);

    MoveLever(&xl,&yl,&fi,t);
    DrawLever(xl,yl);

    DrawSun();



    txSleep(1000);

    t++;

    }


    return 0;

}

void Draw_Fon()
{

    txSetFillColor(RGB(18, 5, 18));
   txRectangle(0, 0, 1075, 625);

   txSetColor(RGB(255, 255, 255));
   txSetFillColor(RGB(255, 255, 255));
    txCircle(123, 44, 3);

 txSetFillColor(RGB(255, 255, 255));
    txCircle(246, 34, 3);

     txSetFillColor(RGB(255, 255, 255));
    txCircle(196,98, 3);

     txSetFillColor(RGB(255, 255, 255));
    txCircle(374, 63, 3);

     txSetFillColor(RGB(255, 255, 255));
    txCircle(319, 83, 3);

     txSetFillColor(RGB(255, 255, 255));
    txCircle(23, 143, 3);

 txSetFillColor(RGB(255, 255, 255));
    txCircle(243, 104, 3);

     txSetFillColor(RGB(255, 255, 255));
    txCircle(383, 179, 3);

     txSetFillColor(RGB(255, 255, 255));
    txCircle(374, 63, 3);

    txSetFillColor(RGB(255, 255,255));
txCircle (206,206, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (226,275, 3);


txSetFillColor(RGB(255, 255,255));
txCircle (874,392, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (800,473, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (656,501, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (945,540, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (945,540, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (995,116, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (565,77, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (55,578, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (166,537, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (44,500, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (149,421, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (177,403, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (153,319, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (220,275, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (115,249, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (107,250, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (73,271, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (207,206, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (624,305, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (658,562, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (820,63, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (751,318, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (944,540, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (947,299, 3);

txSetFillColor(RGB(255, 255,255));
txCircle (328,59, 3);
}

void DrawBase(int xh, int yh, int xl, int yl)
{

    txSetFillColor(RGB(126, 126, 126));
    txRectangle       (302, 594, 607, 616);

    txSetFillColor(RGB(126, 126, 126));
    txRectangle       (421, 395, 455 , 594);

    txSetFillColor (RGB(126, 126, 126));


   // POINT chee[4] = {{448, 407}, {448, 414}, {639, 407}, {639, 414}};
   // txPolygon (chee, 4);

   txSetFillColor(RGB(126, 126, 126));
   POINT che[4] = {{707, 269}, {719,277}, {639, 408}, {623, 408}};
   txPolygon (che, 4);


    txSetFillColor (RGB(126, 126, 126));




    POINT cheR[4]  = {{xh, yh},{xh, yh-5},{xl, yl-5}, {xl,yl}};
    txPolygon (cheR,  4);


}

void DrawSun()
{
    txSetFillColor(RGB(255, 255, 0));
    txCircle (434, 250, 151);
}
void DrawEarth()
{

    txSetFillColor(RGB(0, 128, 255));
    txCircle (762,195, 87);
}

void DrawLever(int x, int y)
{
   txSetFillColor(RGB(128, 0, 64));
   txCircle (438, 452, 24);

   txSetFillColor(RGB(128, 64, 0));

   //{x-366+448, y-452+460}, {x-366+448,y-452+444}};

  POINT ruchka[4]  = {{x-366+375, y-452+444},{x-366+375, y-452+460},{438, 466}, {448,444}};
  txPolygon (ruchka,  4);

   //txRectangle(x-366+375, y-452+444, x-366+448 , y-452+460);

   txSetFillColor(RGB(126, 126, 126));
   txCircle (x,y,13);
}

void MoveLever(int *x, int *y, int *fi, int t)
{
  float psi;
  int r=75;

  *fi=*fi+4;
  if (*fi==360)
  {
    *fi=0;
  }
  psi=(*fi)*3.14/180;

  *y=452+round(r*sin(psi));
  *x=438+round(r*cos(psi));


   //txRectangle(x-366+375, y-452+444, x-366+448 , y-452+460)
}

void MoveBase(int *xh, int *yh,int *xl, int *yl, int *fi, int t)
{
  float psi;
  int ah=17;
  int bh=5;
  int al=183;
  int bl=20;


  *fi=*fi+4;
  if (*fi==360)
  {
    *fi=0;
  }
  psi=(*fi)*3.14/180;

  *yl=413+round(bl*sin(psi));
  *xl=455+round(al*cos(psi));

  *yh=413+round(bh*sin(psi));
  *xh=438+round(ah*cos(psi));


   //txRectangle(x-366+375, y-452+444, x-366+448 , y-452+460)
}

void lever()
{
int x = 436;
int y = 456;

  txSetFillColor(RGB(126, 126, 126));
  txCircle(x - 28, y + 28, 24);
}

void base()
{
int x = 623;
int y = 408;
    txSetFillColor(RGB(0, 128, 255));
    txCircle (762,195, 87);
    txSetFillColor(RGB(126, 126, 126));
    POINT che[4] = {{455, 413},{455, 408},{638, 408}, {638,413}};
    txPolygon (che, 4);
    }
