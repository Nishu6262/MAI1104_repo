#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int count=1;
for(i=0;i<=4;i++)
{
printf("\n");
for(j=0;j<i;j++)
{
printf("%d \n",count);
count++;
}
}
getch();
}