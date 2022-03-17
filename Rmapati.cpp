#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;   
	vector<vector<int> > adj;
	for(int i=0;i<n;i++)
	{
		adj.push_back(vector<int>());
	}
	
 for(int i=0;i<n;i++)
   {
 	string str;
 	cin>>str;
 	string temp;
 	stringstream str_strm(str);
 	while(str_strm>>temp)
 	{
 		stringstream geek(temp);
 		int x=0;
 		geek>>x;
 		adj[i].push_back(x);
 
     }
    }
 	
   
   for(int i=0;i<n;i++)
   {
   	for(int j=0;j<n;j++)
   	{
   		cout<<adj[i][j];
	   }
   }
 	
}