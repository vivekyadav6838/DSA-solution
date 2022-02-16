// C++ program for Pascal’s Triangle
// A O(n^2) time and O(n^2) extra space

#include <bits/stdc++.h>
using namespace std;

void printPascal(int n)
{
	
	
	int arr[n][n];

	
	for (int i = 0; i < n; i++)
	{
		// Every line has number of integers
		// equal to line number
		for (int j = 0; j <= i; j++)
		{
		// First and last values in every row are 1
		if (i == j || j == 0)
			arr[i][j] = 1;
		
		else
			arr[i][j] = arr[i - 1][j - 1] +
							arr[i - 1][j];
		cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
}

// Driver code
int main()
{
	int n ;
    cout<<"enter a number"<<endl;
    cin>>n;
	printPascal(n);
	return 0;
}


