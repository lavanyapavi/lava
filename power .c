#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=1;
printf("Enter the value");
scanf("%d",&a);
printf("enter the value");
scanf("%d",&b);
while(b!=0)
{
c*=a;
b--;
}
printf("the value of :%d",c);
}
