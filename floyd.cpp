#include<iostream>
using namespace std;
int main()
{
	
	int count=1;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(j<=i)
			{
				cout<<" "<<count;
				count++;
			}
			else
			cout<<" ";
		}
		cout<<endl; 
	}
}