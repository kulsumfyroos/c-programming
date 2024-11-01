#include<stdio.h>
void main()
{
int a,b,choice;
float result;
printf("enter the numbers");
scanf('%d%d",&a,&b);
printf("1.addition\n2.subtraction\n3.multiplication\n4.division\nenter your choice");
scanf("%d",choice);
if(choice=1)
{
result=a+b;
printf("result is %d",result);
]
else if(choice=2)
{
result=a-b;
printf("result is %d",result);
}
else if(choice=3)
{
result=a*b;
printf("result is %d",result);
}
else if(choice=4)
{
result=a/b;
printf("result is %d",result);
}
else{
printf("not available");
}
}




