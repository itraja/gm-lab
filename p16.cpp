#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<graphics.h>
int polyx[6]={540,590,570,510,490,540},polyy[6]={220,270,320,320,270,220};
int x,y,polysides=5;
int pointinpolygon();
void drawpolygon();
void main()
{
int c,gd=DETECT,gm;
printf("Enter the X & Y axis values:");
scanf("%d%d",&x,&y);
initgraph(&gd,&gm,"C:\\TC\\BGI");
drawpolygon();
putpixel(x,y,WHITE);
c=pointinpolygon();
if(c==0)
printf("\n Outside");
else
printf("\n Inside");
getch();
}
void drawpolygon()
{
int i,j;
for(i=0;i<5;i++)
{
j=i+1;
line(polyx[i],polyy[i],polyx[j],polyy[j]);
}
line(polyx[i],polyy[i],polyx[0],polyy[0]);
}
int pointinpolygon()
{
int i,j=polysides-1,oddnodes=0;
for(i=0;i<polysides;i++)
{
if(polyy[i]<y&&polyy[j]>=y||polyy[j]<y&&polyy[i]>=y)
{
if(polyx[i]+(y-polyy[i])/(polyy[j]-polyy[i])*(polyx[j]-polyx[i])<x)
{
oddnodes=1;
}
}
j=i;
}
return oddnodes;
}