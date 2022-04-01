#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
#define speed                         \ 
    ios_base::sync_with_stdio(false); \ 
    cin.tie(NULL);                    \ 
    cout.tie(NULL); 
#define fi(a, b) for (ll i = a; i < b; i++) 
#define fj(a, b) for (ll j = a; j < b; j++) 
#define fk(a, b) for (ll k = a; k < b; k++) 
#define fr(i, a, b) for (int i = a; i >= b; i--) 
#define vvi vector<vector<int>> 
#define vvll vector<vector<ll>> 
#define vi vector<int> 
#define pii pair<int, int> 
#define vll vector<ll> 
#define MOD 1000000007 
#define debug cout << "!!Debug!!" << endl; 
#define read(n) \ 
    int n;       \ 
    cin >> n; 
#define reads(s) \ 
    string s;    \ 
    cin >> s; 
#define readc(c) \ 
    char c;      \ 
    cin >> c; 
#define inpp(Anna, n) \ 
    vi Anna(n);      \ 
    fi(0, n) cin >> Anna[i]; 
#define all(vec) vec.begin(), vec.end() 
#define minn(vec) *min_element(all(vec)) 
#define maxx(vec) *max_element(all(vec)) 
#define sum(vec) accumulate(all(vec), 0ll) 
#define pprint(Anna) fi(0, Anna.size()) cout << Anna[i] << " "; 
#define check(Anna)                          \ 
    cout << endl;                         \ 
    cout << "[ ";                         \ 
    fi(0, Anna.size()) cout << Anna[i] << ", "; \ 
    cout << "]\n" 
 
void solve() 
{ 
    read(m); 
    read(n); 
  ll Anna[m][n]; 
  fi(0,m) 
    fj(0,n) 
      cin >> Anna[i][j]; 
  ll CC[m+n-1]; 
    fi(0,m+n-1) 
        CC[i]=0; 
    fi(0,m) 
    fj(0,n) 
      CC[i+j]+=Anna[i][j]; 
    fi(0,m+n-2) 
    { 
        if(CC[i]!=CC[i+1]) 
        { 
            cout << "NO"; 
            return; 
        } 
    } 
    cout << "YES"; 
} 
int main() 
{ 
    read(t); 
    int k = 1; 
    while(t--) 
    { 
        // cout << "Case #" << k++ << ": ";     
        solve();     
        cout << endl; 
    } 
    return 0; 
}