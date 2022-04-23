#include<stdio.h>
int main()
{
	static int i=5;
	if(--i){
		main();
		printf("%d ",i);
	}
}

// Output
// 0 0 0 0 
// Explanation: Since i is a static variable and 
// is stored in Data Section, all calls to main share same i. 