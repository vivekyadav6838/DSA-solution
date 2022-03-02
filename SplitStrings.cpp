// A C/C++ program for splitting a string
// using strtok()
#include<bits/stdc++.h>
#include <stdio.h>
#include <string.h>

int main()
{
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
