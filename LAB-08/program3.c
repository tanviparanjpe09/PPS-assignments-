#include<stdio.h>
void swap(float *a,float *b)
{
float temp;
temp = *a;
*a = *b;
*b = temp;
}
int main()
{
float temp1, temp2;
printf("Enter Temperature Of Incubator 1:");
scanf("%f",&temp1);
printf("Enter Temperature Of Incubator 2:");
scanf("%f",&temp2);
printf("\nBefore Swapping:\n");
printf("Incubator 1 Temperature = %.2f C\n",temp1);
printf("Incubator 2 Temperature = %.2f C\n",temp2);
swap(&temp1, &temp2);
printf("\nAfter Swapping:\n");
printf("Incubator 1 Temperature = %.2f C\n",temp1);
printf("Incubator 2 Temperature = %.2f C\n",temp2);
return 0;
}
