#include <stdio.h>

int main()
{
char s1[7]="1234", *p;
p=s1+3;
*p='6';
p=p-2;
*p='8';
printf("%s", s1);

}
// op 1836