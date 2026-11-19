#include <stdio.h>
int factorial(int n) {
int i;
int fact = 1;
for (i = 1; i <= n; i++) {
fact = fact * i;
}
return fact;
}
int main() {
int num = 5;
int result;
result = factorial(num);
printf("factorial of %d = %d\n", num, result);
return 0;
}
