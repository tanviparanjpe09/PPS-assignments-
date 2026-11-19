#include<stdio.h>
int change(int x)
{
x = 50;
return x;
}
int main()
{
int a = 10;
change(a);
printf("Aftre Call By Value, a = %d\n",a);
return 0;
}
