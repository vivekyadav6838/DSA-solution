#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, count = 1000000, k;
    cin >> n;
    vector<int> v, u;
    k = n;
    while(n--){
        int a;
        cin >> a;
        v.push_back(a);
        u.push_back(0);
    }
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        for(int j = i+1; j < v.size(); j++){
            if(v[j]%v[i] != 0){
                u[i]++;
                u[j]++;
            }
        }
        if(u[i]!=0)
        count = min(count, u[i]);
    }
    if(count == 1000000)
    count = 0;
    cout << count << endl;
}