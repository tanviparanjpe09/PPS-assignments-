#include<stdio.h>
int main () {
int rows, cols;
// Input the number of rows and columns
printf("Enter the number of rows : ");
scanf("%d" ,&rows);
printf("Enter the number of columns : ");
scanf("%d" ,&cols);
int mat1[rows][cols], mat2[rows][cols] ,result[rows][cols];
//Input elements of the first matrix
printf("Enter elements of the first matrix;\n");
for (int i=0;i<rows; i++) {
for (int j=0;j<cols; j++) {
printf("Element [%d][%d]:",i,j);
scanf("%d",&mat1[i][j]);
}
}
//Input elements of the second matrix
printf("\nEnter elements of the second matrix :\n");
for (int i=0;i<rows; i++) {
for (int j=0; j<cols; j++) {
printf("Element [%d][%d]:",i,j);
scanf("%d" ,&mat2[i][j]);
}
}
//Performing matrix addition
for (int i=0;i<rows; i++) {
for (int j=0; j<cols; j++) {
result[i][j] = mat1[i][j] + mat2[i][j];
}
}
// Displaying the result
printf("\n Resultant matrix after addition :\n");
for (int i=0; i<rows;i++) {
for (int j=0;j<cols;j++) {
printf("%d\t" , result[i][j]);
}
printf("\n");
}
return 0;
}
