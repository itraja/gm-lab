#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int k,x=100,y=100,m,i,a=0,j=0,index=0;
char hai[100];
char args[10][15];
initgraph(&gd,&gm,"C://TC//BGI");
puts("Enter the text");
gets(hai);
while(hai[a]!='\0')
{
if(hai[a]==' ')
{
args[index][j]='\0';
j=0;
a++;
index++;
}
args[index][j++]=hai[a++];
}
args[index++][j]='\0';
getch();
m=50;
for(k=0;k<index;k++)
{
x=100+m;
y=100;
for(i=1;i<250;i++)
{
outtextxy(x+50,y,args[k]);
delay(10);
y+=1;
if(i!=249)
clrscr();
if(i==249)
outtextxy(x+50,y+10,args[k]);
}
m=m+50;
}
getch();
closegraph();
}