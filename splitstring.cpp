#include<bits/stdc++.h>
/*** @author Vivek Yadav ***/
// #define for(i,n) for (int i = 0; i < n; ++i)
// #define ll long long int
// #define arr(n) int arr[n]
using namespace std;
int main()
{
		string s = "My-name-is-khan-and-i-like-movies-hi-hello-how-are-you?-not";
		
		vector<string>lst;
		string v="";
		for(int i=0;i<=s.length();i++)
		{
           if(s[i]=='-' || s[i]=='\0')
		   {
		   lst.push_back(v);
		   v="";
		   i+=1;
		   }
		   v.push_back(s[i]);
		}
		
		for(int i=0;i<=lst.size();i++){
			cout<<lst[i]<<endl;
		}


	return 0;
}