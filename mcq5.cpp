#include <stdio.h>

int main()
{
char*p;
p="hello";
printf("%c", *&*p);
}
// o/p is h