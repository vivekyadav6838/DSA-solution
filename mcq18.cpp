#include<stdio.h>
int main()
{
	static int var = 5;
	printf("%d ",var--);
	if(var)
		main();				
}
// Output
// 5 4 3 2 1 
 
// Explanation: Same as previous question. The only difference here is, sequence of 
// calling main and printf is changed, therefore different output.