#include<stdio.h>
void main()
{
int a[5],n,i;
printf("enter size");
scanf("%d",&n);
printf("enter values");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
printf("entered values are :");
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}