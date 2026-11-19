#include<stdio.h>
int main(){
int choice;
float n1, n2, result;
do{
printf("=====MENU====\n");
printf("1. Addition\n");
printf("2. Subtraction\n");
printf("3. Multiplication\n");
printf("4. Division\n");
printf("5. exit programm\n");
scanf("%d", &choice);
if(1<=choice && choice<=4)
{
printf("Enter the first number\n");
scanf("%f" , &n1);
printf("Enter the second number\n");
scanf("%f",&n2);
}
switch(choice)
{
case 1:
result = n1+n2;
printf("SUM=%2f\n" , result);
break;
case 2:
result = n1-n2;
printf("SUBTRACTION = %.2f\n", result);
break ;
case 3:
result= n1*n2;
printf("MULTIPLICATION = %.2f\n",result);
break;
case 4:
if(n2!=0)
{result= n1/n2 ;
printf("DIVISION = %.2f\n",result);
}
else
{printf("CANNOT DIVIDE BY ZERO !!\n");
}
break;
case 5:
printf("Exiting programm\n");
break;
default:
printf("invalid choice\n");
break;
} while(choice|=5);
return 0;
}
