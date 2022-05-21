#include<bits/stdc++.h>
using namespace std;

int main(){
   int n;
   cin>>n;
   vector<map<char,int>>v(n+1);
   vector<string>a;
   for(int i=0;i<=n;i++){
      string s;
      getline(cin,s);
      
      a.push_back(s);
   }
   int i=0;
   
   for(auto x:a){
      //cout<<x<<"\n";
      if(x[0]=='{'){
         v[i+1]=v[i];
         i++;
      }
      else if(x[0]=='}'){
         v[i].clear();
         i--;
      }
      else if(x[0]=='a'){
         char c=x[7];
         const string st=x.substr(9);
         //cout<<st<<"*";
         int num=stoi(st);
         v[i][c]=num;
      }
      else if(x!=""){
         char c=x[6];
         if(v[i].find(c)!=v[i].end()){
            cout<<v[i][c]<<endl;
         }
         else
         cout<<"undefined\n";
      }
   }
}