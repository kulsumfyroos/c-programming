#include<stdio.h>
void main()
{
int choice;
printf("1.borotta\n2.biriyani\n3.friedrice\n4.mandhi\nenter your choice");
scanf("%d",&choice);
switch(choice){
case 1:
printf("borotta");
break;
case 2:
printf("biriyani");
break;
case 3:
printf("friedrice");
break;
case 4:
printf("mandhi");
break;
default:
printf("empty");
}
}



