#include<stdio.h>
void main()
{
int a[5],n,i,j,temp;
printf("enter size");
scanf("%d",&n);
printf("enter values");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j]
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
printf("sorted array is:);
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
}