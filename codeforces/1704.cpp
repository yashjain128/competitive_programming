#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n, m;
    cin >> n >> m;

    ll a[n][m];
    for (ll i=0; i<n; i++){
        for (ll j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    for (ll j=0; j<m; j++){
         
    }    
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    ll t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}