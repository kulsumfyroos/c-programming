#include<stdio.h>
void main()
{
int a[n],n,i,sum=0;
printf("enter size");
scanf("%d",&n);
printf("enter values");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n;i++)
{
sum=sum+a[i];
}
printf("total sum is %d",sum);
}