#include <stdio.h>
int main()
{
int m, i=0, j=1, k=2;
m=i++||j++||k++;
printf("%d %d %d %d", m, i, j, k);
}
// o/p is 1 1 2 2