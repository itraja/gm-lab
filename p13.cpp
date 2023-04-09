#include<dos.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
#include<conio.h>
void dda(int x1,int y1,int x2,int y2){
float x,y,dx,dy,length;
int i,gd=DETECT,gm;

initgraph(&gd,&gm,"c:\\TC\\BGI");

dx=abs(x2-x1);
dy=abs(y2-y1);
if(dx >=dy)
{
length =dx;
}
else
{
length =
dy;
}
dx=(x2-x1)/length;
dy=(y2-y1)/length;
x= x1 +0.5;/*factor 0.5 is added to round the values*/
y=y1+0.5;/*factor 0.5 is added to round the values*/

i=1;
while(i<=length)
{
putpixel(x,y,WHITE);
x =x +dx;
y =y +dy;
i =i+1;
delay(50);/*delay is purposely inserted to see*/
}
}
void main()
{
dda(100,10,300,400);
dda(100,400,300,10);
getch();
}