#include<bits/stdc++.h>
// /*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
	int n;
	cin>>n;
	int arr[n+2]={0};
	vector<int>ans;

	for(int i=1;i<=n;i++){
		int m=i;
		while(m<=n && !arr[m])
		{
			ans.push_back(m);
			arr[m]=1;
			m *=2;
		
		}
	}
	cout<<2<<endl;
	for(int i=0;i<=ans.size()-1;i++)
	{
		cout<<(ans[i])<<" ";
	}
	cout<<endl;
}
	return 0;
}