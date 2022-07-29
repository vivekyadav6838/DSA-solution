#include<bits/stdc++.h>

using namespace std;

bool cmp(pair<string , int>a,pair<string , int>b){

if(a.second!=b.second){

return a.second>b.second;

}

else{

return a.first<b.first;

}

}

int main(){

int n;cin>>n;

vector<pair <string, int>> v(n);

int i=0;

while(i<n){

cin>>v[i].first >>v[i].second;

i++;

}

sort(v.begin(),v.end(),cmp);

for(int i=0;i<n;i++){

cout<< v[i].first <<" " <<v[i].second<<endl;

}

}

 