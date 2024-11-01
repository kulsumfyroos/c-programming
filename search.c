#include<stdio.h>
void main()
{
int a[n],n,i,searchkey,flag=0;
printf("enter size");
scanf("%d",&n);
printf("enter values");
for(i=0;i<n;i++)
{
scanf("%d",a[i]);
}
printf("enter the search key");
scanf("%d",searchkey);
for(i=0;i<n;i++)
{
if(searchkey==a[i])
{
flag=1;
break;
}
}
if(flag==1)
{
printf("item found at %d position",i+1);
}
else
{
printf("item not found");
}
}