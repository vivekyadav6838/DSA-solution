// C++ program to print all possible
// substrings of a given string
#include<bits/stdc++.h>
using namespace std;


void subString(string s, int n)
{ int arr[n];
	
	for (int i = 0; i < n; i++)
		for (int len = 1; len <= n - i; len++)
			cout << s.substr(i, len) << endl;
}

// Driver program to test above function
int main()
{
	string s = "417";
	subString(s,s.length());
	return 0;
}
