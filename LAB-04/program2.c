#include<stdio.h>
int main ()
{
int A[2][2], B[2][2], C[2][2];
int i, j;
//Input first matrix
printf("Enter the measurements for first biological sample:\n");
for(i=0;i<2; i++)
{
for(j=0;j<2;j++)
{
scanf("%d" , & A[i][j]);
}
}
//Input second matrix
printf("Enter the measurements for second biological sample:\n");
for(i=0;i<2; i++)
{
for(j=0;j<2;j++)
{
scanf("%d" , &B[i][j]);
}
}
//Add the two matrices
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
C[i][j]=A[i][j] + B[i][j];
}
}
//Display resultant matrix
printf("\nResultant Measurement Matrix:\n");
for(i=0;i<2;i++)
{
for(j=0;j<2;j++)
{
printf("%d\t",C[i][j]);
}
printf("\n");
}
return 0;
}
