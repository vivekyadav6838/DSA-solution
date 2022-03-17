
#include<bits/stdc++.h>
using namespace std;


int main()
{
	system("cls");
	string str = "Geeks-for-Geeks";

	// Returns first token
	char *token = strtok(str, "-");

	// Keep printing tokens while one of the
	// delimiters present in str[].
	while (token != NULL)
	{
		printf("%s\n", token);
		token = strtok(NULL, "-");
	}

	return 0;
}
