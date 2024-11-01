#include<stdio.h>
void main()
{
int sum=0,i,n;
print("enter a number");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
}
printf("sum is %d",sum);
}