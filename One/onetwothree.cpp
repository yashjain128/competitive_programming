#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=false;
const bool filein=false;
const string f="stacking";
const int maxn = 1e5+10;
const int mod = 1e9+7;


void solve(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }

    vector<vector<int>> dp(m, vector<int>(m));
    int cm = m;
    for (int i=n-1; i>=0; i--){
        

    }
}  

int main(){
    if (filein){
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(50);
    }
    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}