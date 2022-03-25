
#include<bits/stdc++.h>
using namespace std;


void subString(string s, int n)
{
	int count=0;
	vector<set<char>>st;
	for (int i = 0; i < n; i++)
		for (int len = 1; len <= n - i; len++)
			st.insert(s.substr(i, len));

	for(int i=0;i<n;i++)
	{
		if(st[i].size()==2)
		{
          count++;
		}
	}
	cout<<count<<endl;
}


int main()
{
	string s = "abc";
	subString(s,s.length());
	return 0;
}
