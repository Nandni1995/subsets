#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,a[50],b[50],c,d;
clrscr();
printf("enter the numbers:");
scanf("%d",&c);
scanf("%d",&d);
for(i=0;i<c;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<d;i++)
{
scanf("%d",&b[i]);
}
for(i=0;i<c;i++)
{
for(j=0;j<d;j++)
{
if(a[i]==b[j])
break;
}
}
if(j==d)
printf("a is a subset of b");
getch();
}
