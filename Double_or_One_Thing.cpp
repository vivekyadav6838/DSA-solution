#include <bits/stdc++.h> 
using namespace std; 
 
void solve() 
{ 
    string str; 
    cin >> str; 
 
    stack<char> stackwa; 
    string ans; 
    for (int i = 0; i < str.size(); i++) { 
        int x = str[i]; 
        if (stackwa.empty()) { 
            stackwa.push(x); 
            continue; 
        } 
 
        int y = stackwa.top(); 
        if (x == y) { 
            stackwa.push(x); 
        } 
 
        else if (x < y) { 
            while (!stackwa.empty()) { 
                ans.push_back(stackwa.top()); 
                stackwa.pop(); 
            } 
            stackwa.push(x); 
        } 
        else { 
            while (!stackwa.empty()) { 
                char c = stackwa.top(); 
                ans.push_back(c); 
                ans.push_back(c); 
                stackwa.pop(); 
            } 
            stackwa.push(x); 
        } 
    } 
    while (stackwa.size()) { 
        ans.push_back(stackwa.top()); 
        stackwa.pop(); 
    } 
 
    cout << ans << endl; 
} 
 
int32_t main() 
{ 
    
 
    int Tc = 1; 
    cin >> Tc; 
 
    for (int i = 1; i <= Tc; i++) { 
        cout << "Case #" << i << ": "; 
        solve(); 
    } 
    return 0; 
}