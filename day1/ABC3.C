#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int x,y
for(x=1;x<=10;x++)
{
printf("%d",x);
}
for(y= x*5;y<=50; &y)
{
printf("%d \n",y);
}
getch();
}