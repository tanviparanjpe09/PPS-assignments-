#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main () {
char str1[20],str2[20];
int ch, i, j;
do {
printf("\tMENU\n");
printf("------------------\n");
printf("1: find length of string\n");
printf("2: concatenate strings\n");
printf("3: copy string\n");
printf("4: compare strings\n");
printf("5: exit\n");
printf("--------------------\n");
printf("enter your choice : ");
scanf("%d" , &ch);
switch (ch) {
case 1 :
printf("enter string: ");
scanf("%s" , str1);
i= strlen(str1);
printf("length of string : %d\n\n" ,i);
break ;
case 2 :
printf("enter first string : ");
scanf("%s" , str1);
printf("enter second string : ");
scanf("%s" , str2);
strcat(str1 , str2);
printf("string after concatenation: %s\n\n", str1);
break;
case 3 :
printf("Enter a string1 : " );
scanf("%s" , str1);
printf("Enter a string2: " );
scanf("%s" , str2);
printf("\nString Before copied:\nString1=\"%s\", string2=\"%s\"n" , str1 ,str2);
strcpy(str2 , str1 );
printf("---------------------------------------\n");
printf("\"we are copying string String1 to string2\"\n");
printf("---------------------------------------\n");
printf("string after copied:\nstring1=\"%s\" , string2=\"%s\"\n" , str1, str2);
break ;
case 4:
printf("enter first string: ");
scanf("%s" ,str1);
printf("enter second string: ");
scanf("%s" ,str2 );
j=strcmp(str1 , str2 );
if (j==0) {
printf("strings are same \n\n");
} else {
printf("strings are not same\n\n");
}
break;
case 5 :
exit(0);
break;
default:
printf("invalid input.please enter valid input .\n\n");
}
} while (ch!= 5);
return 0;
}
