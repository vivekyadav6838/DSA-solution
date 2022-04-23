#include <stdlib.h>
#include <stdio.h>
//enum {false, true};
int main()
{
int i = 1;
do
{
	printf("%d\n", i);
	i++;
	if (i < 15)
		continue;
} while (false);

getchar();
return 0;
}
// Output: 1 
// Explanation: The do while loop checks condition after each iteration. So after continue statement, control transfers to the statement while(false). Since the condition is false ‘i’ is printed only once.
// Now try below program.
